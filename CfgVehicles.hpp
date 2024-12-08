class CfgVehicles
{
    class Man;
    class Inventory_Base;

	class MGT_MilitaryCase1000_Green;
	class SW_case_free: MGT_MilitaryCase1000_Green
	{
		scope = 2;
        inventorySlot = "Case_anomaly";
		displayName = "Аномальный кейс";
		descriptionShort = "Кейс в котором сохраняются все ваши вещи, после 'тяжелого ранения'.";
		itemsCargoSize[] = {2,2};
	};
	class SW_case_donat_v1: MGT_MilitaryCase1000_Green
	{
		scope = 2;
        inventorySlot = "Case_anomaly";
		displayName = "Аномальный кейс";
		descriptionShort = "Кейс в котором сохраняются все ваши вещи, после 'тяжелого ранения'.";
		itemsCargoSize[] = {5,4};
		attachments[] = {"shoulder"};
	};
    class SurvivorBase: Man
	{
		attachments[] += {"Case_anomaly"};
		class InventoryEquipment
		{
			playerSlots[] += {"Slot_case"};
		};
	};
};