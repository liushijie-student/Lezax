#pragma once

#include "Core.h"

namespace Lezax {

	class LEZAX_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	//To be defind in CLIENT
	Application* CreateApplication();
	
}


