/* ** Inherited Class Information // rhsusf_hmmwv **

M998
8 Seater, Open
rhsusf_m998_d_2dr;
hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};

rhsusf_m998_w_2dr;
hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","interior_wood","2drcargocomplete","camo1","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",""};

M1025
4 Seater, Closed
rhsusf_m1025_d;
hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"};


** Humvee Retexturing Information **

hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
hiddenSelectionsTextures[] = {"humvees_by_eutyches\paa\a_exterior.paa","humvees_by_eutyches\paa\b_interior.paa","humvees_by_eutyches\paa\c_a2.paa","humvees_by_eutyches\paa\d_wheels.paa","humvees_by_eutyches\paa\e_mainbody.paa","humvees_by_eutyches\paa\f_gratting.paa","humvees_by_eutyches\paa\g_camo1_tile.paa","humvees_by_eutyches\paa\h_camo2_m1025.paa","humvees_by_eutyches\paa\i_unitdecals1.paa","humvees_by_eutyches\paa\j_unitdecals2.paa"};

** Most retextures are by Corey.  Black M1025 exteriors by Dunbar Snackbar**

*/

class CfgPatches
{
	class humvees_by_eutyches
	{
		units[] = {"rhsusf_m998_black","rhsusf_m998_white","rhsusf_m998_olive","rhsusf_m998_tan","rhsusf_m1025_black","rhsusf_m1025_white","rhsusf_m1025_olive","rhsusf_m1025_tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_hmmwv"};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class rhsusf_m1025_d;
	class rhsusf_m998_d_2dr;
	class rhsusf_m998_w_2dr;
	
	class rhsusf_m998_black: rhsusf_m998_w_2dr
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Humvee Open 8 Seater Black";
		DLC = "";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","interior_wood","2drcargocomplete","camo1","unitdecals_1","unitdecals_2"};
		hiddenSelectionsTextures[] = {"humvees_by_eutyches\paa\a_exterior_black.paa","humvees_by_eutyches\paa\b_interior_black.paa","humvees_by_eutyches\paa\c_a2_black.paa","humvees_by_eutyches\paa\d_wheels_black.paa","humvees_by_eutyches\paa\e_mainbody_black.paa","humvees_by_eutyches\paa\f_gratting_black.paa","humvees_by_eutyches\paa\l_interior_wood_black.paa","humvees_by_eutyches\paa\k_2drcargocomplete_black.paa","humvees_by_eutyches\paa\i_unitdecals1.paa","humvees_by_eutyches\paa\j_unitdecals2.paa"};
	};
	
	class rhsusf_m998_white: rhsusf_m998_w_2dr
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Humvee Open 8 Seater White";
		DLC = "";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","interior_wood","2drcargocomplete","camo1","unitdecals_1","unitdecals_2"};
		hiddenSelectionsTextures[] = {"humvees_by_eutyches\paa\a_exterior_white.paa","humvees_by_eutyches\paa\b_interior_black.paa","humvees_by_eutyches\paa\c_a2_white.paa","humvees_by_eutyches\paa\d_wheels_white.paa","humvees_by_eutyches\paa\e_mainbody_white.paa","humvees_by_eutyches\paa\f_gratting_white.paa","humvees_by_eutyches\paa\l_interior_wood_black.paa","humvees_by_eutyches\paa\k_2drcargocomplete_white.paa","humvees_by_eutyches\paa\i_unitdecals1.paa","humvees_by_eutyches\paa\j_unitdecals2.paa"};
	};
	
	class rhsusf_m1025_black: rhsusf_m1025_d
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Humvee Closed 4 Seater Black";
		DLC = "";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2"};
		hiddenSelectionsTextures[] = {"humvees_by_eutyches\paa\a_exterior_black.paa","humvees_by_eutyches\paa\b_interior_black.paa","humvees_by_eutyches\paa\c_a2_black.paa","humvees_by_eutyches\paa\d_wheels_black.paa","humvees_by_eutyches\paa\e_mainbody_black.paa","humvees_by_eutyches\paa\f_gratting_black.paa","humvees_by_eutyches\paa\g_camo1_tile_black.paa","humvees_by_eutyches\paa\h_camo2_m1025_black.paa","humvees_by_eutyches\paa\i_unitdecals1.paa","humvees_by_eutyches\paa\j_unitdecals2.paa"};
	};
	
	class rhsusf_m1025_white: rhsusf_m1025_d
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "Humvee Closed 4 Seater White";
		DLC = "";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2"};
		hiddenSelectionsTextures[] = {"humvees_by_eutyches\paa\a_exterior_white.paa","humvees_by_eutyches\paa\b_interior_black.paa","humvees_by_eutyches\paa\c_a2_white.paa","humvees_by_eutyches\paa\d_wheels_white.paa","humvees_by_eutyches\paa\e_mainbody_white.paa","humvees_by_eutyches\paa\f_gratting_white.paa","humvees_by_eutyches\paa\g_camo1_tile_white.paa","humvees_by_eutyches\paa\h_camo2_m1025_white.paa","humvees_by_eutyches\paa\i_unitdecals1.paa","humvees_by_eutyches\paa\j_unitdecals2.paa"};
	};
};