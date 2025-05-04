#include <Lezax.h>

class SandBox : public Lezax::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}

};

Lezax::Application* Lezax::CreateApplication()
{
	return new SandBox();
}