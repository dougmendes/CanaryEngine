#pragma once

struct GLFWwindow;

namespace Canary
{
	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		GLFWwindow* m_Window = nullptr;
		bool m_Running = true;
	};

	//Client implementation (game)
	Application* CreateApplication();
}