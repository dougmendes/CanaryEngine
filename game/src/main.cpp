#include <Canary/Canary.h>

class Sandbox : public Canary::Application
{
public:
	Sandbox() = default;
	~Sandbox() = default;
};

Canary::Application* Canary::CreateApplication()
{
	return new Sandbox();
}