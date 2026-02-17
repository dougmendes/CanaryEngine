#include <Canary/Canary.h>

#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>

static void GlfwErrorCallback(int error, const char* description)
{
	spdlog::error("GLFW error {}:{}", error, description ? description : "(null)");
}

int main() {
	Canary::Hello();

	glfwSetErrorCallback(GlfwErrorCallback);

	if (!glfwInit())
	{
		spdlog::critical("Failed to initialize GLFW");
		return 1;
	}

	// For now: no graphics API context (DX12 will come next phase)
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	GLFWwindow* window = glfwCreateWindow(1280, 720, "CanaryEngine - Phase 2 (GLFW)", nullptr, nullptr);
	if (!window)
	{
		spdlog::critical("Failed to create GLFW window");
		glfwTerminate();
		return 1;
	}

	spdlog::info("Window created. Entering main loop...");
	
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		//Close on ESC
		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		{
			glfwSetWindowShouldClose(window, GLFW_TRUE);
		}
	}
	spdlog::info("Shutting down...");

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}