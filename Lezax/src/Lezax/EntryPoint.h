#pragma once

#ifdef LZ_PLATFORM_WINDOWS

extern Lezax::Application* Lezax::CreateApplication();

int main(int argc, char** argv)
{
	Lezax::Log::Init();
	LZ_CORE_WARN("Initialized Log!");
	int a = 5;
	LZ_INFO("Hello! Var={0}", a);

	auto app = Lezax::CreateApplication();
	app->Run();
	delete app;
}

#endif // LZ_PLATFORM_WINDOWS

