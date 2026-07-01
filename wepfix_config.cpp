class CfgPatches
{
	class Atmos_WeaponSoundFix_129
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "DZ_Data", "DZ_Sounds_Effects", "DZ_Weapons_Firearms" }; 
	};
};

class CfgSoundSets
{
	class SVD_Shot_SoundSet;
	class SVD_Tail_SoundSet;
	class SVD_InteriorTail_SoundSet;
	
	class AKM_Shot_SoundSet;
	class AKM_Tail_SoundSet;
	class AKM_InteriorTail_SoundSet;

	class FNFAL_Shot_SoundSet: SVD_Shot_SoundSet {};
	class FNFAL_Shot_1st_SoundSet: SVD_Shot_SoundSet {};
	class FNFAL_Shot_iterior_SoundSet: SVD_Shot_SoundSet {};
	class FNFAL_Shot_1st_iterior_SoundSet: SVD_Shot_SoundSet {};
	
	class FNFAL_Tail_SoundSet: SVD_Tail_SoundSet {};
	class FNFAL_InteriorTail_SoundSet: SVD_InteriorTail_SoundSet {};
	class FNFAL_Slapback_SoundSet: SVD_Tail_SoundSet {};

	class FNFAL_silencerHomeMade_SoundSet: SVD_Shot_SoundSet {};
	class FNFAL_silencerHomeMadeTail_SoundSet: SVD_Tail_SoundSet {};
	class FNFAL_silencerInteriorHomeMadeTail_SoundSet: SVD_InteriorTail_SoundSet {};

	class AKM_Shot_iterior_SoundSet: AKM_Shot_SoundSet {};
	class AKM_Slapback_SoundSet: AKM_Tail_SoundSet {};
	class AKM_Tail_2D_SoundSet: AKM_Tail_SoundSet {};
	class AKM_Shot_1st_SoundSet: AKM_Shot_SoundSet {};
	class AKM_Shot_1st_iterior_SoundSet: AKM_Shot_SoundSet {};
	
	class AKM_silencer_SoundSet: AKM_Shot_SoundSet {};
	class AKM_1st_silencer_SoundSet: AKM_Shot_SoundSet {};
	class AKM_silencerTail_SoundSet: AKM_Tail_SoundSet {};
	class AKM_silencerInteriorTail_SoundSet: AKM_InteriorTail_SoundSet {};
	class AKM_1st_silencerHomeMade_SoundSet: AKM_Shot_SoundSet {};
	class AKM_silencerHomeMade_SoundSet: AKM_Shot_SoundSet {};
	class AKM_silencerHomeMadeTail_SoundSet: AKM_Tail_SoundSet {};
	class AKM_silencerInteriorHomeMadeTail_SoundSet: AKM_InteriorTail_SoundSet {};
};
