this enableSimulation false;
this allowDamage false;
this addAction[
	localize"STR_MAR_Gun_Store", //"Gun Store" / "Waffenladen"
	life_fnc_gunStoreMenu,"gun",0,false,false,"",' license_civ_gun && playerSide == civilian'
];
this addAction[
	format[
		"%1 ($%2)",
		localize (
			getText(
				missionConfigFile >> "Licenses" >> "gun" >> "displayName"
			)
		),
		[
			(getNumber
				(missionConfigFile >> "Licenses" >> "gun" >> "price")
			)
		]
		call life_fnc_numberText
	],
	life_fnc_buyLicense,"gun",0,false,false,"",' !license_civ_gun && playerSide == civilian '
];