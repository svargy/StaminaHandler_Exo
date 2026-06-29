modded class StaminaHandler
{
	override void Update(float deltaT, int pCurrentCommandID)
	{
		#ifdef DIAG_DEVELOPER
		if (m_StaminaDisabled)
			return;
		#endif
		
		if (!m_Player)
			return;
		
		array<int> expiredCooldowns = new array<int>();
		foreach (int modifier, StaminaCooldownParams cooldownParams : m_CooldownMap)
		{
			cooldownParams.param1 -= deltaT;
			if (cooldownParams.param1 <= 0)
			{
				expiredCooldowns.Insert(modifier);
			}
		}
		
		foreach (int expiredModifier : expiredCooldowns)
		{
			ResetCooldown(expiredModifier);
		}
		
		m_IsStaminaGainBonusCached = false;
		m_MovementStateChanged = HasMovementStateChanged();
		
		bool isAiOrSingleplayer = m_Player.IsAuthorityOwner();
		bool isServerOrSingleplayer = m_Player.IsAuthority();
		
		// --- СТАРТ ЛОГИКИ ЭКЗОСКЕЛЕТА ---
		if (m_Player.IsExoActive())
		{
			if (isServerOrSingleplayer)
			{
				m_PlayerLoad = m_Player.GetWeightEx();
				//m_PlayerLoad -= 200000; // Вес в граммах
				if (m_PlayerLoad < 0)
				{
					m_PlayerLoad = 0;
				}

				if (m_PlayerLoad >= CfgGameplayHandler.GetStaminaWeightLimitThreshold())
				{
					m_StaminaCap = Math.Max((CfgGameplayHandler.GetStaminaMax() - (((m_PlayerLoad - CfgGameplayHandler.GetStaminaWeightLimitThreshold()) / GameConstants.STAMINA_KG_TO_GRAMS) * CfgGameplayHandler.GetStaminaKgToStaminaPercentPenalty())), CfgGameplayHandler.GetStaminaMinCap());
				}
				else
				{
					m_StaminaCap = CfgGameplayHandler.GetStaminaMax();
				}
				
				m_LastPlayerLoad = m_Player.GetWeightEx(); 
			}
			else
			{
				PlayerBaseMove move = PlayerBaseMove.Cast(m_Player.GetNextMove());
				if (move)
				{
					move.m_fStaminaValue = m_Stamina;
					move.m_fStaminaCapacity = m_StaminaCap;
				}
			}
			
			if (isAiOrSingleplayer)
			{
				m_StaminaSynced = m_Stamina;
				m_StaminaCapSynced = m_StaminaCap;
			}
			
			if (m_MovementStateChanged || m_StaminaDelta != 0 || m_IsInCooldown || !m_InitUpdate || m_Stamina < m_StaminaCap)
				ProcessMovementState();
			
			if (m_StaminaDelta < 0)
			{
				m_StaminaDelta = m_StaminaDelta / 3;
			}
			
			ProcessStaminaChanges(deltaT, isServerOrSingleplayer);

			ApplyExhaustion();
			CheckStaminaState();
			
			m_StaminaDelta = 0;
			m_StaminaDepletion = 0; 
			m_IsStaminaGainBonusCached = false;
			if (!m_InitUpdate)
				m_InitUpdate = true;
		}
		// --- КОНЕЦ ЛОГИКИ ЭКЗОСКЕЛЕТА ---
		else
		{
			super.Update(deltaT, pCurrentCommandID);
		}
	}
};
