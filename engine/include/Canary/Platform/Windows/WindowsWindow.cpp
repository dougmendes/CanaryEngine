#include "WindowsWindow.h"
#include <spdlog/spdlog.h>

namespace Canary
{
	WindowsWindow::WindowsWindow(unsigned int width, unsigned int height, const std::string& title)
		: m_Width(width), m_Height(height)
	{
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

		m_Window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);

		if (!m_Window)
		{
			spdlog::critical("Failed to create window");
		}
	}

	WindowsWindow::~WindowsWindow()
	{
		glfwDestroyWindow(m_Window);
		glfwTerminate();
	}

	void WindowsWindow::OnUpdate()
	{
		glfwPollEvents();
	}
}