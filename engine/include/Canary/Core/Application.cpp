#include "Canary/Core/Application.h"

#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>
#include <stdexcept>

namespace
{
	void GlfwErrorCallback(int error, const char* description)
	{
		spdlog::error("GLFW error {}: {}", error, description ? description : "(null)");
	}
}

namespace Canary
{
	Application::Application()
	{
		glfwSetErrorCallback(GlfwErrorCallback);

		if (!glfwInit())
		{
			spdlog::critical("Failed to initialize GLFW");
			throw std::runtime_error("Failed to initialize GLFW");
		}

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

		m_Window = glfwCreateWindow(1280, 720, "Canary Engine", nullptr, nullptr);
		if (!m_Window)
		{
			glfwTerminate();
			spdlog::critical("Failed to create GLFW window");
			throw std::runtime_error("Failed to create GLFW window");
		}

		glfwSetFramebufferSizeCallback(m_Window, [](GLFWwindow*, int w, int h)
		{
			spdlog::info("Framebuffer resized: {} x {}", w, h);
		});

		spdlog::info("Window create. Entering main loop...");
	}

	Application::~Application()
	{
		spdlog::info("Shutting down...");

		if (m_Window)
		{
			glfwDestroyWindow(m_Window);
			m_Window = nullptr;
		}
		glfwTerminate();
	}

	void Application::Run()
	{
		while (m_Running && !glfwWindowShouldClose(m_Window))
		{
			glfwPollEvents();

			if (glfwGetKey(m_Window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
			{
				glfwSetWindowShouldClose(m_Window, GLFW_TRUE);
			}
		}
	}
}