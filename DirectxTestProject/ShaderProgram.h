#pragma once
#include "DeviceResources.h"
#include "Renderer.h"
#include <string>
#include <memory>

class ShaderProgram
{
public:
	ShaderProgram();

	HRESULT app_use_directx();
	HRESULT create_window();

	HRESULT run(
		std::shared_ptr<DeviceResources> deviceResources,
		std::shared_ptr<Renderer> renderer
	);

	HWND GetWindowHandle();

	static LRESULT CALLBACK StaticWindowProc(
		HWND hWnd,
		UINT uMsg,
		WPARAM wParam,
		LPARAM lParam
	);

private:
	HMENU     m_hMenu;
	RECT      m_rc;
	HWND      m_hWnd;

	static HINSTANCE m_hInstance;
	static std::wstring m_windowClassName;
};

