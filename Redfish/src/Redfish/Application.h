#pragma once

#include "Core.h"

namespace Redfish
{
	class REDFISH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}