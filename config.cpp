class CfgPatches
{
	class sw_case
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class sw_case
	{
		dir = "SW\simple_mods\sw_case";
		name = "sw_case";
		type = "mod";
        author = "SiberianWorker";
	    authorID = "76561198202090403";
		class defs
		{
			class imageSets
			{
				files[]= {"SW\simple_mods/sw_case/GUI/ImageSets/wallet.imageset"};
			};
        };
	};
};

#include "CfgVehicles.hpp"
#include "CfgSlots.hpp"