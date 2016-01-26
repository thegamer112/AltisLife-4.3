#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Reskins the vehicle
*/
private ["_textures","_className","_classNameLife"];
params [
	["_vehicle",objNull,[objNull]],
	["_index",-1,[0]]
];

_className = typeOf _vehicle;
_classNameLife = _className;

if(isNull _vehicle OR !alive _vehicle OR EQUAL(_index,-1)) exitWith {};
//Does the vehicle already have random styles? Halt till it's set.

if(local _vehicle) then {
	switch _className do {
		case "C_Offroad_01_F": {[_vehicle,"color",3,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Hatchback_01_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Hatchback_01_sport_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_SUV_01_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Van_01_box_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Van_01_transport_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
	};
};

if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _classNameLife)) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};

_textures = SEL(SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"textures"),_index),2);
if(isNil "_textures" OR {EQUAL(count _textures,0)}) exitWith {};

_vehicle SVAR ["Life_VEH_color",_index,true];

{_vehicle setObjectTexture [_forEachIndex,_x];} foreach _textures;
