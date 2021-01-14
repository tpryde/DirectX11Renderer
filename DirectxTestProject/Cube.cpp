#include "stdafx.h"
#include "Cube.h"

Cube::Cube() {}

int Cube::Create()
{
	HRESULT hr = S_OK;

	// Begin initialization.

	// Instantiate the window manager class.
	std::shared_ptr<ShaderProgram> winMain = std::shared_ptr<ShaderProgram>(new ShaderProgram());
	// Create a window.
	hr = winMain->create_window();

	if (SUCCEEDED(hr))
	{
		// Instantiate the device manager class.
		std::shared_ptr<DeviceResources> deviceResources = std::shared_ptr<DeviceResources>(new DeviceResources());
		// Create device resources.
		deviceResources->CreateDeviceResources();

		// Instantiate the renderer.
		std::shared_ptr<Renderer> renderer = std::shared_ptr<Renderer>(new Renderer(deviceResources));
		renderer->CreateDeviceDependentResources();

		// We have a window, so initialize window size-dependent resources.
		deviceResources->CreateWindowResources(winMain->GetWindowHandle());
		renderer->CreateWindowSizeDependentResources();

		// Run the program.
		hr = winMain->run(deviceResources, renderer);
	}

	return hr;
}