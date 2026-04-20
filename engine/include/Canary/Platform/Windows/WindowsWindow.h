#pragma once

#include "Canary/Core/Window.h"
#include <GLFW/glfw3.h>

namespace Canary
{
	class WindowsWindow : public Window
	{
	public:
		WindowsWindow(unsigned int width, unsigned int height, const std::string& title);
		virtual ~WindowsWindow();

		void OnUpdate() override;

		unsigned int GetWidth() const override { return m_Width; }
		unsigned int GetHeight() const override { return m_Height; }

		void* GetNativeWindow() const override { return m_Window; }
	private:
		GLFWwindow* m_Window;
		unsigned int m_Width, m_Height;
	};
}