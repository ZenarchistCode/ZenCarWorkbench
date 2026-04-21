ref ZenStaticCarWorkbenchConfig g_ZenStaticCarWorkbenchConfig;

static ZenStaticCarWorkbenchConfig GetZenStaticCarWorkbenchConfig()
{
	if (!g_ZenStaticCarWorkbenchConfig) GetZenConfigRegister().RegisterConfig(ZenStaticCarWorkbenchConfig);
	return g_ZenStaticCarWorkbenchConfig;
}

modded class ZenConfigRegister
{
	override void RegisterPreload()
	{
		super.RegisterPreload(); 
		RegisterType(ZenStaticCarWorkbenchConfig);
	}
}

class ZenStaticCarWorkbenchConfig: ZenConfigBase
{
	// -------------------------
	// CONFIG SETTINGS
	// -------------------------
	override void OnRegistered()
	{
		g_ZenStaticCarWorkbenchConfig = this;
	}
	
	override string    	GetCurrentVersion()   		{ return "1.29.1"; }
	override bool		ShouldLoadOnServer() 		{ return true; }
	override bool 		IsServerOnlyConfig()		{ return true; }
	
	override bool ReadJson(string path, out string err)
	{
		return JsonFileLoader<ZenStaticCarWorkbenchConfig>.LoadFile(path, this, err);
	}

	override bool WriteJson(string path, out string err)
	{
		return JsonFileLoader<ZenStaticCarWorkbenchConfig>.SaveFile(path, this, err);
	}
	
	int MaxAttachmentCount;
	ref map<string, float> AttachmentTypes;

	override void SetDefaults()
	{
		MaxAttachmentCount = 4;
		AttachmentTypes = new map<string, float>;
		AttachmentTypes.Insert("LugWrench", 0.1);
		AttachmentTypes.Insert("TireRepairKit", 0.1);
		AttachmentTypes.Insert("CanisterGasoline", 0.01);
		AttachmentTypes.Insert("CarRadiator", 0.1);
		AttachmentTypes.Insert("CarBattery", 0.1);
		AttachmentTypes.Insert("TruckBattery", 0.1);
		AttachmentTypes.Insert("Sledgehammer", 0.1);
		AttachmentTypes.Insert("SparkPlug", 0.1);
		AttachmentTypes.Insert("SparkPlug", 0.1);
		AttachmentTypes.Insert("GlowPlug", 0.1);
		AttachmentTypes.Insert("Rag", 0.1);
		AttachmentTypes.Insert("Pliers", 0.1);
		AttachmentTypes.Insert("Screwdriver", 0.1);
		AttachmentTypes.Insert("Pipewrench", 0.1);
		AttachmentTypes.Insert("Wrench", 0.1);
		AttachmentTypes.Insert("Zen_SprayCan_Black", 0.1);
		AttachmentTypes.Insert("Zen_SprayCan_Green", 0.1);
		AttachmentTypes.Insert("Blowtorch", 0.1);
	}
}