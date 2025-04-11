#pragma once

#ifdef RF_PLATFORM_WINDOWS

extern Redfish::Application* Redfish::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Redfish::CreateApplication(); // create the application
	app->Run(); // run the application
	delete app; // deallocate the heap memory
}


#endif // RF_PLATFORM_WINDOWS
