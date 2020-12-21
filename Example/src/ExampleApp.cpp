#include <RealEngine.h>

class ExampleApp: public Real::Application
{
public:
	ExampleApp()
	{

	}

	~ExampleApp()
	{

	}
};

Real::Application* Real::CreateApplication()
{
	return new ExampleApp();
}