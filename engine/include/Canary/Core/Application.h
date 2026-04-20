#pragma once

#include "Canary/Core/Window.h"
#include <memory>

namespace Canary
{
	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//Client implementation (game)
	Application* CreateApplication();
}