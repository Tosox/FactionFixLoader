#include "CoHModSDK.hpp"

#pragma comment(lib, "CoHModSDK.lib")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID reserved) {
    DisableThreadLibraryCalls(hModule);
    return TRUE;
}

extern "C" {
    __declspec(dllexport) void OnSDKLoad() {
        LoadLibraryA("FactionFix.dll");
    }

    __declspec(dllexport) void OnGameStart() {
        // Unused
    }

    __declspec(dllexport) void OnGameShutdown() {
        // Unused
    }

    __declspec(dllexport) const char* GetModName() {
        return "FactionFix Loader";
    }

    __declspec(dllexport) const char* GetModVersion() {
        return "1.2.0";
    }

    __declspec(dllexport) const char* GetModAuthor() {
        return "Tosox";
    }
}
