class CfgPatches
{
	class pinkHGU
	{
		author = "The CAG";
		name = "Pink HGU";
		units[] = {"PH_Pilot_Dummy"};
		weapons[] = {"PH_HeliHelmet_Pink"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_characters_f"};
	};
	class pinkHGU_ITEMS
	{
		version = 1.0;
		units[] = {"PH_HeliHelmet_Pink"};
	};
};
class CfgVehicles
{
	class B_Helipilot_F;
	class PH_Pilot_Dummy: B_Helipilot_F
	{
		author = "The CAG";
		scope = 2;
		displayName = "Dummy Pilot";
		respawnLinkedItems[] = {"PH_HeliHelmet_Pink"};
	};
};
class CfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class PH_HeliHelmet_Pink: H_HelmetB
	{
		author = "The CAG";
		displayName = "Helicopter Pilot Helmet (Pink)";
		_generalMacro = "PH_HeliHelmet_Pink";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pinkHGU\Data\helmet_heli_pink_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
		// subItems[] = {"Integrated_NVG_F"}; Optional if Tora wants it
	};
};