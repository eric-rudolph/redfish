#include <Redfish.h>

class TackleBox : public Redfish::Application
{
public:
	TackleBox()
	{
	}
	~TackleBox()
	{
	}

};

Redfish::Application* Redfish::CreateApplication()
{
	return new TackleBox();
}