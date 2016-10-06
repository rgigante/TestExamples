#include "c4d.h"
#include "main.h"
#include "dummyplugin.h"


Bool PluginStart(void)
{
	if (!RegisterDummyCommand())
		return false;
	
	return true;
}

void PluginEnd(void)
{
}

Bool PluginMessage(Int32 id, void* data)
{
	return false;
}

Bool RegisterDummyCommand(void)
{
	return RegisterCommandPlugin(ID_DUMMY, "DummyPlugin", PLUGINFLAG_COMMAND_HOTKEY, nullptr, "", DummyPlugin::Alloc());
}