modded class Hologram
{
	override string ProjectionBasedOnParent()
	{
		Zen_CarWorkbenchKit kit = Zen_CarWorkbenchKit.Cast(m_Parent);

		if (kit)
			return kit.GetDeployedClassname();

		return super.ProjectionBasedOnParent();
	}

	override string GetProjectionName(ItemBase item)
	{
		Zen_CarWorkbenchKit kit = Zen_CarWorkbenchKit.Cast(m_Parent);

		if (kit)
			return kit.GetDeployedClassname();

		return super.GetProjectionName(item);
	}

	override EntityAI PlaceEntity(EntityAI entity_for_placing)
	{
		Zen_CarWorkbenchKit kit = Zen_CarWorkbenchKit.Cast(m_Parent);

		if (kit)
			return entity_for_placing;

		return super.PlaceEntity(entity_for_placing);
	}

	override void EvaluateCollision(ItemBase action_item = null)
	{
		if (m_Parent.IsInherited(Zen_CarWorkbenchKit))
		{
			SetIsColliding(false);
			return;
		}

		super.EvaluateCollision(action_item);
	}

	override vector GetDefaultOrientation()
	{
		Zen_CarWorkbenchKit kit = Zen_CarWorkbenchKit.Cast(m_Parent);

		if (kit)
			return super.GetDefaultOrientation() + kit.GetDeployOrientationOffset();

		return super.GetDefaultOrientation();
	}

	override void SetProjectionPosition(vector position)
	{
		Zen_CarWorkbenchKit kit = Zen_CarWorkbenchKit.Cast(m_Parent);

		if (kit)
		{
			m_Projection.SetPosition(position + kit.GetDeployPositionOffset());

			if (IsFloating())
				m_Projection.SetPosition(SetOnGround(position + kit.GetDeployPositionOffset()));

			return;
		}

		super.SetProjectionPosition(position);
	}
};