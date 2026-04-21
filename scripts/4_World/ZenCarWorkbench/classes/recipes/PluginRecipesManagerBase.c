modded class PluginRecipesManagerBase extends PluginBase
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new Zen_CraftCarWorkbenchKit);
		RegisterRecipe(new Zen_DeCraftCarWorkbenchKit);
	}
};