class Zen_CarWorkbench extends ItemBase
{
	override bool IsRefresherSignalingViable()
	{
		return !IsRuined();
	}

	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}

	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		super.EEHealthLevelChanged(oldLevel, newLevel, zone);

		if (!g_Game.IsDedicatedServer())
			return;

		if (newLevel == GameConstants.STATE_RUINED)
			MiscGameplayFunctions.DropAllItemsInInventoryInBounds(this, vector.Zero);
	}
}