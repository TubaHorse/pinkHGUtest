class CfgPatches
{
    class pinkHGU
	{
		author="TubaHorse";
		name="PINK HGU TEST";
		units[]={"PILOT_DUMMY"};
		weapons[]={"pinkHGU"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_characters_f"};
	};
	class pinkHGU_ITEMS
	{
		version=1.0;
		units[]={"pinkHGU"};
	}
};
class cfgFactionClasses
{
	class Pink_Helmet_Gang_F
	{
		displayName="Pink Helmet Gang";
		priority = 2;
		side = 1;
		icon = "";
	}
};
class CfgVehicles
{
    class B_Helipilot_F;
    class PILOT_DUMMY: B_Helipilot_F
    { 
        author="TubaHorse";
        scope=2;
        displayName="Dummy Pilot";
        respawnLinkedItems[]=
        {
            "pinkHGU"
        };
		weapons[]=
		{
			"arifle_MX_Hamr_pointer_F", // I set these items as different than default to test if my mod was affecting anything at all. It does spawn this dummy unit w/ the selected items.
			"hgun_P07_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_65x39_caseless_mag_Tracer",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"B_IR_Grenade",
			"B_IR_Grenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
    };
};
class CfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
    { 
        class ItemInfo; 
    };
	class pinkHGU: H_HelmetB
	{
		author="TubaHorse";
		displayName = "pinkHGU";
		_generalMacro="pinkHGU"
		picture = "";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] =
		{
			"\pinkHGU\Data\helmet_heli_pink_B.paa"
		};
        // hiddenSelectionsMaterials[] = {"\pinkHGU\Data\helmet_heli.rvmat"};
		// ^ Not sure if this is needed
		class ItemInfo: ItemInfo
        {
            mass=20; // Set different than default to test if mod was affecting the item
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
        };
	};
};