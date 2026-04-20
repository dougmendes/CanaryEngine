#include "Canary/Core/Window.h"
#include "Canary/Platform/Windows/WindowsWindow.h"

namespace Canary
{
    Window* Window::Create(unsigned int width, unsigned int height, const std::string& title)
    {
        return new WindowsWindow(width, height, title);
    }
}