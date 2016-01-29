/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
        //Handguns
			{ "hgun_P07_F", "", 7650},
			{ "hgun_Rook40_F", "", 7650 },
			{ "16Rnd_9x21_Mag", "", 100},
			{ "30Rnd_9x21_Mag", "", 150},
			{ "hgun_ACPC2_F", "", 11500 },
			{ "9Rnd_45ACP_Mag", "", 100},
			{ "hgun_Pistol_heavy_02_F", "", 11500 },
			{ "6Rnd_45ACP_Cylinder", "", 50},
			{ "hgun_Pistol_heavy_01_F", "", 15300},
			{ "11Rnd_45ACP_Mag", "", 150},
			{ "optic_ACO_grn_smg", "", 2500, 250 },
            { "V_Rangemaster_belt", "", 4900, -1 },
			{ "cse_bandage_basic", "Einfache Bandage", 50, 25 }
         
        //SMG's
        //SMG{ "hgun_PDW2000_F", "", 20000 },
        //SMG{ "16Rnd_9x21_Mag", "", 100},
        //SMG{ "30Rnd_9x21_Mag", "", 150},
        //SMG{"SMG_02_F", "", 19100},
        //SMG{ "30Rnd_9x21_Mag", "", 150},
        //SMG{"30Rnd_45ACP_MAG_SMG_01", "", 200},
        //SMG{"30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 150}
		};
	};

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
        //SMG's
        { "hgun_PDW2000_F", "", 20000 },
        { "16Rnd_9x21_Mag", "", 100},
        { "SMG_02_F", "", 20000},
        { "30Rnd_9x21_Mag", "", 150},
        { "SMG_01_F", "", 25000},
        { "30Rnd_45ACP_MAG_SMG_01", "", 200},
        { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 150},
         
		//Rifle
        //Underwater Gun
        { "arifle_SDAR_F", "", 15000},
        { "20Rnd_556x45_UW_mag", "", 100},
         
        //Assault Rifles
        { "arifle_Mk20C_plain_F", "", 25000},
        { "arifle_Mk20_plain_F", "", 30000},
        { "arifle_Mk20_GL_plain_F", "", 40000},
        { "arifle_TRG20_F", "", 25000},
        { "arifle_TRG21_F", "", 30000},
        { "arifle_TRG21_GL_F", "", 40000},
        { "30Rnd_556x45_Stanag", "", 200},
        { "30Rnd_556x45_Stanag_Tracer_Green", "", 150},
        { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 150},
        { "30Rnd_556x45_Stanag_Tracer_Red", "", 150},
                  
        { "arifle_Katiba_C_F", "", 25000},
        { "arifle_Katiba_F", "", 30000 },
        { "arifle_Katiba_GL_F", "", 40000},
        { "30Rnd_65x39_caseless_green", "", 200},
        { "30Rnd_65x39_caseless_green_mag_Tracer", "", 150},

        { "arifle_MXC_F", "", 25000},
		{ "arifle_MXC_F", "", 25000},
        { "arifle_MXC_Black_F", "", 25000},
        { "arifle_MX_F", "", 30000},
        { "arifle_MX_Black_F", "", 35000},
        { "arifle_MX_GL_F", "", 40000},
        { "arifle_MX_GL_Black_F", "", 40000},

        // Markman Rifles
        { "arifle_MXM_F", "", 45000},
        { "arifle_MXM_Black_F", "", 50000},
        { "30Rnd_65x39_caseless_mag", "", 200},
        { "30Rnd_65x39_caseless_mag_Tracer", "", 150},
        { "srifle_DMR_01_F", "", 60000},
        { "10Rnd_762x54_Mag", "", 150},
        { "srifle_EBR_F", "", 70000},

         // DLC
        //{ "srifle_DMR_06_camo_F", "", 70000},
        //{ "srifle_DMR_03_F", "", 75000},
        //{ "20Rnd_762x51_Mag", "", 250},
        //{ "srifle_DMR_02_F", "", 115000},
        //{ "10Rnd_338_Mag", "", 500},
        //{ "srifle_DMR_05_blk_F", "", 115000},
        //{ "10Rnd_93x64_DMR_05_Mag", "", 500},

		// Sniper Rifles
        { "srifle_LRR_LRPS_F", "", 153000},
        { "srifle_LRR_camo_LRPS_F", "", 184000},
        { "7Rnd_408_Mag", "", 500},
        { "srifle_GM6_LRPS_F", "", 191000},
        { "srifle_GM6_camo_LRPS_F", "", 230000},
        { "5Rnd_127x108_Mag", "", 500},
        { "5Rnd_127x108_APDS_Mag", "", 600},
        { "srifle_DMR_04_F", "", 306000},
        { "srifle_DMR_04_tan_F", "", 345000},
        { "10Rnd_127x54_Mag", "", 750},
		
		//Attachments
		{ "optic_ACO_grn", "", 3500, 350 },
        { "optic_Holosight", "", 3600, 275 },
        { "acc_flashlight", "", 1000, 100 },
        { "optic_Hamr", "", 7500, -1 }
		
		// He Grenades
        //{ "1Rnd_HE_Grenade_shell", "", 1250},
        //{ "3Rnd_HE_Grenade_shell", "", 2500},
		// Grenades
        //{ "1Rnd_Smoke_Grenade_shell", "", 500},
        //{ "1Rnd_SmokePurple_Grenade_shell", "", 500},
        //{ "1Rnd_SmokeBlue_Grenade_shell", "", 500},
        //{ "1Rnd_SmokeGreen_Grenade_shell", "", 500},
        //{ "1Rnd_SmokeYellow_Grenade_shell", "", 500},
        //{ "1Rnd_SmokeOrange_Grenade_shell", "", 500},
        //{ "1Rnd_SmokeRed_Grenade_shell", "", 500},
        //{ "3Rnd_Smoke_Grenade_shell", "", 1000},
        //{ "3Rnd_SmokePurple_Grenade_shell", "", 1000},
        //{ "3Rnd_SmokeBlue_Grenade_shell", "", 1000},
        //{ "3Rnd_SmokeGreen_Grenade_shell", "", 1000},
        //{ "3Rnd_SmokeYellow_Grenade_shell", "", 1000},
        //{ "3Rnd_SmokeOrange_Grenade_shell", "", 1000},
        //{ "3Rnd_SmokeRed_Grenade_shell", "", 1000},
        //{ "UGL_FlareWhite_F", "", 250},
        //{ "UGL_FlareGreen_F", "", 250},
        //{ "UGL_FlareYellow_F", "", 250},
        //{ "UGL_FlareRed_F", "", 250},
     ,   //{ "UGL_FlareCIR_F", "", 250},
        //{ "3Rnd_UGL_FlareWhite_F", "", 500},
        //{ "3Rnd_UGL_FlareGreen_F", "", 500},
        //{ "3Rnd_UGL_FlareYellow_F", "", 500},
        //{ "3Rnd_UGL_FlareRed_F", "", 500},
        //{ "3Rnd_UGL_FlareCIR_F", "", 500},
		{ "cse_bandage_basic", "Einfache Bandage", 50, 25 },
		{ "tf_anarc210", "AN/ARC120 40km", 1000, 500 }
//		{ "tf_anarc164", "AN/ARC164 40km", 1000, 500 },
//		{ "tf_mr6000l", "MR6000L 40km", 1000, 500 }
		};
	};

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
        { "hgun_Rook40_F", "", 1500 },
        { "hgun_Pistol_heavy_02_F", "", 2500 },
        { "hgun_ACPC2_F", "", 4500 },
        { "hgun_PDW2000_F", "", 9500 },
        { "optic_ACO_grn_smg", "", 950 },
        { "V_Rangemaster_belt", "", 1900 },
        { "16Rnd_9x21_Mag", "", 25 },
        { "9Rnd_45ACP_Mag", "", 45 },
        { "6Rnd_45ACP_Cylinder", "", 50 },
        { "30Rnd_9x21_Mag", "", 75 },
		{ "cse_bandage_basic", "Einfache Bandage", 50, 25 },
		{ "tf_anprc152", "AN/PRC152 5km", 250, 120 }
//		{ "tf_anprc148jem", "AM/PRC148jem 5km", 250, 120 },
//		{ "tf_fadak", "FADAK 5km", 250, 120 }
		};
	};

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "NVGoggles", "", 2000 },
			{ "cse_bandage_basic", "Einfache Bandage", 50, 25 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 },
			{ "Binocular", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			//{ "FirstAidKit", "", 150 },
			{ "tf_anprc152", "AN/PRC152 5km", 250, 120 }
	//		{ "tf_anprc148jem", "AM/PRC148jem 5km", 250, 120 },
	//		{ "tf_fadak", "FADAK 5km", 250, 120 }
		};
	};
	
	class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "cse_bandage_basic", "Einfache Bandage", 50, 25 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 125, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
			{ "16Rnd_9x21_Mag", "Stun Gun Magazine", 50, -1 },
            { "hgun_P07_F", "", 7500, 1500 },
		    { "muzzle_snds_L", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
			{ "cse_morphine", "Autoinjektor: Morphine", 50, 25 },
			{ "cse_bandage_basic", "Einfache Bandage", 50, 25 },			
            { "NVGoggles", "", 2000, 980 },
			{ "tf_anprc152", "AN/PRC152 5km", 250, 120 },
	//		{ "tf_anprc148jem", "AM/PRC148jem 5km", 250, 120 },
	//		{ "tf_fadak", "FADAK 5km", 250, 120 },
			{ "tf_anarc210", "AN/ARC120 40km", 1000, 500 }
	//		{ "tf_anarc164", "AN/ARC164 40km", 1000, 500 },
	//		{ "tf_mr6000l", "MR6000L 40km", 1000, 500 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
			{ "arifle_MX_F", "", 35000, 7500 },
			{ "30Rnd_65x39_caseless_mag", "", 130, -1 },
			{ "SMG_02_ACO_F", "", 30000, -1 },
			{ "30Rnd_9x21_Mag", "", 250, -1 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "MineDetector", "", 1000, 500 },
			{ "acc_flashlight", "", 750, 100 },
			{ "optic_Holosight", "", 1200, 275 },
			{ "optic_Arco", "", 2500, -1 },
			{ "muzzle_snds_H", "", 2750, -1 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
            { "30Rnd_9x21_Mag", "", 60, -1 },
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "9Rnd_45ACP_Mag", "", 200, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "cse_bandage_basic", "Einfache Bandage", 50, 25 },
			{ "cse_packing_bandage", "Dicker Verband", 60, 25 },
			{ "cse_bandageElastic", "Elastische Bandage", 70, 40 },
			{ "cse_tourniquet", "Blutaderstauer", 60, 30 },
			{ "cse_splint", "Schiene", 70, 40 },
			{ "cse_morphine", "Autoinjektor: Morphine", 50, 25 },
			{ "cse_atropine", "Autoinjektor: Atrophine", 50, 25 },
			{ "cse_epinephrine", "Autoinjektor: Epinephrine", 50, 25 },
			{ "cse_plasma_iv", "Plasmatransfusion", 100, 50 },
			{ "cse_plasma_iv_250", "Plasmatransfusion 250ml", 110, 55 },
			{ "cse_plasma_iv_500", "Plasmatransfusion 500ml", 130, 65 },
			{ "cse_blood_iv", "Bluttransfusion", 100, 50 },			
			{ "cse_blood_iv_250", "Bluttransfusion 250ml", 110, 55 },			
			{ "cse_blood_iv_500", "Bluttransfusion 500ml", 130, 65 },			
			{ "cse_saline_iv", "Kochsalzlösung", 100, 50 },			
			{ "cse_saline_iv_250", "Kochsalzlösung 250ml", 110, 55 },
			{ "cse_saline_iv_500", "Kochsalzlösung 500ml", 130, 65 },
			{ "cse_quikclot", "Quikclot", 50, 25 },
			{ "cse_nasopharyngeal_tube", "Nasen-Rachen-Tubus", 25, 12 },
			{ "cse_opa", "Opa", 50, 25 },
			{ "cse_liquidSkin", "Sprühpflaster", 5, 1 },
			{ "cse_chestseal", "Torso VerbandsKorsett", 200, 100 },
			{ "cse_personal_aid_kit", "Erste Hilfe Kasten", 5, 1 },
			{ "cse_surgical_kit", "Chirurgen Op-Besteck", 500, 250 },			
			{ "tf_anprc152", "AN/PRC152 5km", 250, 120 },
//			{ "tf_anprc148jem", "AM/PRC148jem 5km", 250, 120 },
//			{ "tf_fadak", "FADAK 5km", 250, 120 },
			{ "tf_anarc210", "AN/ARC120 40km", 1000, 500 },
//			{ "tf_anarc164", "AN/ARC164 40km", 1000, 500 },
//			{ "tf_mr6000l", "MR6000L 40km", 1000, 500 },	
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "NVGoggles", "", 1200, 980 }
        };
    };
};
