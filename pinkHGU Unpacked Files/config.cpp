class cfgPatches
{
    class pinkHGU
    {
        author="The CAG";
        name="Pink HGU Mod";
        units[]=
        {
            "PH_Helipilot_pinkhelm_F"
        };
        weapons[]=
        {
            "PH_PilotHelmetHeli_Pink_B"
        };
        requiredVersion=0.1;
		requiredAddons[]=
        {
            "A3_characters_f",
            "A3_weapons_f"
        };
    };
};

class cfgVehicles
{
    class B_Helipilot_F;
    class PH_Helipilot_pinkhelm_F: B_Helipilot_F
    {
        author="The CAG";
        scope=2;
        displayName="Helicopter Pilot (Pink Helmet)";
        respawnLinkedItems[]=
        {
            "PH_PilotHelmetHeli_Pink_B"
        };
    };
};

class cfgWeapons
{
    class ItemCore;
    class H_HelmetB: ItemCore
    {
        class ItemInfo;
    };
    class PH_PilotHelmetHeli_Pink_B: H_HelmetB
    {
        author="The CAG";
        scope=2;
        scopeArsenal=2;
        displayName="HGU (Pink)";
        picture="\A3\characters_f\Data\UI\icon_H_Pilot_Heli_B_CA.paa";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]=
        {
            "\pinkHGU\Data\helmet_heli_pink_co.paa"
        };
        class ItemInfo: H_HelmetB
        {
            mass=20;
            uniformModel="\A3\Characters_F\Common\headgear_helmet_heli";
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