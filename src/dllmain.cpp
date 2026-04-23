#include "CoHModSDK.hpp"

namespace {
    bool OnInitialize() {
        if (LoadLibraryA("FactionFix.dll") == nullptr) {
            ModSDK::Runtime::LogWarning("Failed to load FactionFix.dll");
        }

        return true;
    }

    void OnShutdown() {}

    const CoHModSDKModuleV1 kModule = {
        .abiVersion = COHMODSDK_ABI_VERSION,
        .size = sizeof(CoHModSDKModuleV1),
        .modId = "de.tosox.factionfixloader",
        .name = "FactionFix Loader",
        .version = "1.4.0",
        .author = "Tosox",
        .OnInitialize = &OnInitialize,
        .OnShutdown = &OnShutdown,
    };
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID reserved) {
    DisableThreadLibraryCalls(hModule);
    return TRUE;
}

COHMODSDK_EXPORT_MODULE(kModule);
