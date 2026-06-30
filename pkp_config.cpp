class CfgPatches
{
	class DZ_Weapons_Firearms_AKM
	{
		units[]=
		{
			"AKM"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class AKM;
	class OpticsInfoRifle;
	class FS_PKP_Base: AKM
	{
		scope=0;
		weight=7140;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=1.1290669;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x54"
		};
		magazines[]=
		{
			"FS_Mag_PKP_200Rnd"
		};
		magazineSwitchTime=0.40000001;
		ejectType=1;
		recoilModifier[]={0.69999999,0.69999999,0.69999999};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadAKM";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\akm\Akm_reload",
			0.80000001,
			1,
			20
		};
		hiddenSelections[]=
		{
			""
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_2",
				1,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.12800001;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_2",
				1,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.105;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
	};
	class FS_PKP: FS_PKP_Base
	{
		scope=2;
		displayName="PKP Pecheneg\ПКП «Печенег»";
		descriptionShort="Российский единый пулемёт, разработанный на основе пулемёта Калашникова Модернизированного. Предназначен для поражения живой силы противника, огневых и транспортных средств, воздушных целей. \Russian single machine gun, developed on the basis of a modernized Kalashnikov machine gun. Designed to destroy enemy personnel, fire and vehicles, air targets.";
		model="\FS_3_W\pkp\pkp.p3d";
		attachments[]=
		{
			"weaponOpticsAK",
			"weaponWrap",
			"suppressorImpro",
			"weaponMuzzleAK"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8800;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
