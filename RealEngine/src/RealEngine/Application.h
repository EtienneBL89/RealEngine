#pragma once

#include "Core.h"

namespace Real
{
	class REAL Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in the client application
	Application* CreateApplication();
}

