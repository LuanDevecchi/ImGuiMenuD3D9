#ifndef STDAFX_GUARD
#define STDAFX_GUARD
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <fstream>
#include <string>
#include <vector>
#include <d3d9.h>
#include "MinHook/include/MinHook.h"
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "winmm.lib")
#include <d3dx9.h>
#if defined _M_X64
#pragma comment(lib, "d3dx9.lib") 
#elif defined _M_IX86
#pragma comment(lib, "d3dx9.lib")
#endif
#endif
