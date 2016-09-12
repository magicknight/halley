#include "system_sdl.h"
#include <halley/plugin/plugin.h>
#include "input_sdl.h"

namespace Halley {
	
	class SDLSystemPlugin : public Plugin {
		HalleyAPIInternal* createAPI(SystemAPI*) override { return new SystemSDL(); }
		PluginType getType() override { return PluginType::SystemAPI; }
		String getName() override { return "System/SDL"; }
	};

	class SDLInputPlugin : public Plugin {
		HalleyAPIInternal* createAPI(SystemAPI*) override { return new InputSDL(); }
		PluginType getType() override { return PluginType::InputAPI; }
		String getName() override { return "Input/SDL"; }
	};
	
}

void initSDLPlugin(Halley::IPluginRegistry &registry)
{
	registry.registerPlugin(std::make_unique<Halley::SDLSystemPlugin>());
	registry.registerPlugin(std::make_unique<Halley::SDLInputPlugin>());
}
