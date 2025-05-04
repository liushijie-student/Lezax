#pragma once

#ifdef LZ_PLATFORM_WINDOWS

extern Lezax::Application* Lezax::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lezax::CreateApplication();
	app->Run();
	delete app;
}

#endif // LZ_PLATFORM_WINDOWS

