// 3D Bench Model Credit: https://sketchfab.com/3d-models/toolbox-7cbe6ce8acc4422dbdd2c00ae5f6d370
// 3D Kit Model Credit: https://sketchfab.com/3d-models/cardboard-box-1bcef93a72c74e9683720788716ed9a6

class CfgPatches
{
	class ZenCarWorkbench
	{
		requiredVersion = 1.0;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Tools",
			"DZ_Gear_Consumables"
		};
		units[] = 
		{
			"Zen_CarWorkbenchKit",
			"Zen_CarWorkbench"
		};
	};
};

class CfgMods
{
	class ZenCarWorkbench
	{
		dir = "ZenCarWorkbench";
		picture = "";
		action = "";
		hideName = 1;	
		hidePicture = 1;
		name = "ZenCarWorkbench";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class imageSets
			{
				files[] =
				{
					"ZenCarWorkbench/data/gui/zencarworkbenchslots.imageset"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenCarWorkbench/scripts/4_World" };
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Zen_CarWorkbenchKit : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ZenCarWorkbenchKit0";
		descriptionShort = "$STR_CfgVehicles_ZenCarWorkbench1";
		model = "ZenCarWorkbench\data\model\kit\kit.p3d";
		weight = 10000;
		itemSize[] = { 9,5 };
		itemBehaviour = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenCarWorkbench\data\textures\kit\kit.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenCarWorkbench\data\textures\kit\kit.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenCarWorkbench\data\textures\kit\kit_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenCarWorkbench\data\textures\kit\kit_damage.rvmat"
							}
						},

						{
							0,

							{
								"ZenCarWorkbench\data\textures\kit\kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType = "cloth";
	};
	class Zen_CarWorkbench : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ZenCarWorkbench0";
		descriptionShort = "$STR_CfgVehicles_ZenCarWorkbench1";
		model = "ZenCarWorkbench\data\model\workbench.p3d";
		forceFarBubble = "true";
		physLayer = "item_large";
		weight = 10000;
		itemSize[] = { 10,10 };
		itemBehaviour = 0;
		repairableWithKits[] = { 10 };
		repairCosts[] = { 30 };
		class Cargo
		{
			itemsCargoSize[] = { 10,5 };
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		attachments[] = 
		{
			"ZenCWB_TireIron",
			"ZenCWB_Repair",
			"ZenCWB_Gasoline",
			"CarRadiator",
			"CarBattery",
			"TruckBattery",
			"ZenCWB_Sledgehammer",
			"SparkPlug",
			"ZenCWB_Spark2",
			"GlowPlug",
			"Rags",
			"ZenCWB_Pliers",
			"ZenCWB_Screwdriver",
			"ZenCWB_Wrench",
			"ZenCWB_Paint1",
			"ZenCWB_Paint2"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenCarWorkbench\data\textures\workbench.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenCarWorkbench\data\textures\workbench.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenCarWorkbench\data\textures\workbench_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenCarWorkbench\data\textures\workbench_damage.rvmat"
							}
						},

						{
							0,

							{
								"ZenCarWorkbench\data\textures\workbench_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType = "metal";
	};
	class LugWrench : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_TireIron"
		};
	};
	class TireRepairKit : Inventory_Base
	{
		inventorySlot[] +=
		{	
			"ZenCWB_Repair"
		};
	};

	class Bottle_Base;
	class CanisterGasoline : Bottle_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Gasoline"
		};
	};
	class Pliers : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Pliers"
		};
	};
	class Screwdriver : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Screwdriver"
		};
	};
	class SledgeHammer : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Sledgehammer"
		};
	};
	class Wrench : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Wrench"
		};
	};
	class SparkPlug : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Spark2"
		};
	};
	class Spraycan_ColorBase : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenCWB_Paint1",
			"ZenCWB_Paint2"
		};
	};
};

class CfgSlots
{
	class Slot_ZenCWB_Spark2
	{
		name = "ZenCWB_Spark2";
		displayName = "$STR_CfgVehicles_SparkPlug0";
		ghostIcon = "set:dayz_inventory image:sparkplug";
	};
	class Slot_ZenCWB_TireIron
	{
		name = "ZenCWB_TireIron";
		displayName = "$STR_CfgVehicles_LugWrench0";
		ghostIcon = "set:zencarworkbenchslots image:tireiron";
	};
	class Slot_ZenCWB_Repair
	{
		name = "ZenCWB_Repair";
		displayName = "$STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:zencarworkbenchslots image:tirerepairkit";
	};
	class Slot_ZenCWB_Gasoline
	{
		name = "ZenCWB_Gasoline";
		displayName = "$STR_CfgVehicles_CanisterGasoline0";
		ghostIcon = "set:zencarworkbenchslots image:gasoline";
	};
	class Slot_ZenCWB_Pliers
	{
		name = "ZenCWB_Pliers";
		displayName = "$STR_CfgVehicles_Pliers0";
		ghostIcon = "set:zencarworkbenchslots image:pliers";
	};
	class Slot_ZenCWB_Screwdriver
	{
		name = "ZenCWB_Screwdriver";
		displayName = "$STR_CfgVehicles_Screwdriver0";
		ghostIcon = "set:zencarworkbenchslots image:screwdriver";
	};
	class Slot_ZenCWB_Sledgehammer
	{
		name = "ZenCWB_Sledgehammer";
		displayName = "$STR_CfgVehicles_SledgeHammer0";
		ghostIcon = "set:zencarworkbenchslots image:sledgehammer";
	};
	class Slot_ZenCWB_Wrench
	{
		name = "ZenCWB_Wrench";
		displayName = "$STR_CfgVehicles_Wrench0";
		ghostIcon = "set:zencarworkbenchslots image:wrench";
	};
	class Slot_ZenCWB_Paint1
	{
		name = "ZenCWB_Paint1";
		displayName = "$STR_CfgVehicles_ZenSprayCan";
		ghostIcon = "set:zencarworkbenchslots image:spraycan";
	};
	class Slot_ZenCWB_Paint2
	{
		name = "ZenCWB_Paint2";
		displayName = "$STR_CfgVehicles_ZenSprayCan";
		ghostIcon = "set:zencarworkbenchslots image:spraycan";
	};
	
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyZenCWBTireRepairKit : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Repair";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBTireRepairKit.p3d";
	};
	class ProxyZenCWBBattery : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "CarBattery";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBBattery.p3d";
	};
	class ProxyZenCWBRadiator : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "CarRadiator";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBRadiator.p3d";
	};
	class ProxyZenCWBTruckBattery : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "TruckBattery";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBTruckBattery.p3d";
	};
	class ProxyZenCWBGlowplug : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "Glowplug";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBGlowplug.p3d";
	};
	class ProxyZenCWBSparkplug : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "SparkPlug";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBSparkplug.p3d";
	};
	class ProxyZenCWBSparkplug2 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Spark2";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBSparkplug2.p3d";
	};
	class ProxyZenCWBJerrycan : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Gasoline";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBJerrycan.p3d";
	};
	class ProxyZenCWBPliers : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Pliers";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBPliers.p3d";
	};
	class ProxyZenCWBRags : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "Rags";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBRags.p3d";
	};
	class ProxyZenCWBScrewdriver : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Screwdriver";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBScrewdriver.p3d";
	};
	class ProxyZenCWBSledgehammer : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Sledgehammer";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBSledgehammer.p3d";
	};
	class ProxyZenCWBTireIron : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_TireIron";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBTireIron.p3d";
	};
	class ProxyZenCWBWrench : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Wrench";
		model = "\ZenCarWorkbench\data\model\proxy\ProxyZenCWBWrench.p3d";
	};
	class ProxyZenCWBPaint1 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Paint1";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBPaint1.p3d";
	};
	class ProxyZenCWBPaint2 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenCWB_Paint2";
		model = "\ZenCarWorkbench\data\model\proxy\ZenCWBPaint2.p3d";
	};
}; 