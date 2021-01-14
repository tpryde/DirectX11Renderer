﻿// stdafx.h : 可在此標頭檔中包含標準的系統 Include 檔，
// 或是經常使用卻很少變更的
// 專案專用 Include 檔案
//

#pragma once

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN             // 從 Windows 標頭排除不常使用的成員
// Windows 標頭檔:
#include <windows.h>

// C RunTime 標頭檔
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// TODO:  在此參考您的程式所需要的其他標頭
#include <memory>
#include <string>
#include <d3d11_2.h>
#include <wrl\client.h>
#include <ppltasks.h>
#include <DirectXMath.h>