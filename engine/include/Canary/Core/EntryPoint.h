#pragma once

#ifdef _WIN32

extern Canary::Application* Canary::CreateApplication();

int main() {
	auto app = Canary::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif