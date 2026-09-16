#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 17 member(s).
class AppResolverTelemetry {
public:
    class ARCBuilder_ScanFoldersAndCreateNewCache;
    class ARCM_RefreshCache;
    class ARCManager_CortanaJumplistChangedForItem;
    class ARCManager_RegisterForDiskNotifications;
    class AppLifecycleReconcilerInitialize;
    class AppLifecycleReconcilerMigrateTaskbarPin;
    class AppLifecycleReconcilerOnPackageInstalling;
    class AppLifecycleReconcilerOnPackageUninstalling;
    class AppLifecycleReconcilerOnPackageUpdating;
    class AppLifecycleReconcilerOnSecondaryTilesChanged;
    class AppUsageReconcilerAllRanksHaveChanged;
    class AppUsageReconcilerPromoteAppsToTopOfFrequentList;
    class AppUsageReconcilerRankChangedForApp;
    class AppUsageReconcilerUpdateAppUsageForTrackedApps;
    class GetStartPinContextMenuCommand;
    class MigrateStartPin;
    class PinUserCreatedItemToStart;
    class UPTM_CreateUserPinnedTileShortcut;
    class UPTM_DeleteUserPinnedTileShortcut;
    class VisualElementsManifestParse;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppResolver_CacheLanguageChanged@AppResolverTelemetry@@SAXXZ
    static void AppResolver_CacheLanguageChanged();
};
