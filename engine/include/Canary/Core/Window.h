#pragma once

#include <string>

struct GLFWwindow;

namespace Canary
{
	class Window
	{
	public:
		virtual ~Window() = default;

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;

		virtual void* GetNativeWindow() const = 0;

		static Window* Create(unsigned int width, unsigned int height, const std::string& title);
	};
}