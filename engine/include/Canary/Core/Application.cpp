#include "Canary/Core/Application.h"
#include <spdlog/spdlog.h>

namespace Canary
{
    Application::Application()
    {
        m_Window.reset(Window::Create(1280, 720, "Canary Engine"));
        spdlog::info("Window created. Entering main loop...");
    }

    Application::~Application()
    {
        spdlog::info("Shutting down...");
    }

    void Application::Run()
    {
        while (m_Running)
        {
            m_Window->OnUpdate();
        }
    }
}