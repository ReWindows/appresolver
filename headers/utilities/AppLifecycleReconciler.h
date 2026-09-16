#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 31 member(s).
class AppLifecycleReconciler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppLifecycleReconciler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppLifecycleReconciler@@QEAA@XZ
    AppLifecycleReconciler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppLifecycleReconciler@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppLifecycleReconciler@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppLifecycleReconciler@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppLifecycleReconciler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppLifecycleReconciler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppLifecycleReconciler@@QEAAJPEAUIAppUsageEventSink@@@Z
    long RuntimeClassInitialize(IAppUsageEventSink *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMainPackage@AppLifecycleReconciler@@CA_NPEAUIPackage@ApplicationModel@Windows@@@Z
    static bool IsMainPackage(::Windows::ApplicationModel::IPackage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPeopleExperienceHost@AppLifecycleReconciler@@CA_NPEAUHSTRING__@@@Z
    static bool IsPeopleExperienceHost(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAppsFolderItemsChanged@AppLifecycleReconciler@@CAJXZ
    static long NotifyAppsFolderItemsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMainPackageInstalled@AppLifecycleReconciler@@AEBAJPEAUIPackage@ApplicationModel@Windows@@@Z
    long OnMainPackageInstalled(::Windows::ApplicationModel::IPackage *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMainPackageUninstalled@AppLifecycleReconciler@@AEBAJPEAUIPackage@ApplicationModel@Windows@@@Z
    long OnMainPackageUninstalled(::Windows::ApplicationModel::IPackage *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMainPackageUpdated@AppLifecycleReconciler@@AEBAJPEAUIPackage@ApplicationModel@Windows@@@Z
    long OnMainPackageUpdated(::Windows::ApplicationModel::IPackage *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageInstalling@AppLifecycleReconciler@@AEAAJPEAUIPackageInstallingEventArgs@ApplicationModel@Windows@@@Z
    long OnPackageInstalling(::Windows::ApplicationModel::IPackageInstallingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageUninstalling@AppLifecycleReconciler@@AEAAJPEAUIPackageUninstallingEventArgs@ApplicationModel@Windows@@@Z
    long OnPackageUninstalling(::Windows::ApplicationModel::IPackageUninstallingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPackageUpdating@AppLifecycleReconciler@@AEAAJPEAUIPackageUpdatingEventArgs@ApplicationModel@Windows@@@Z
    long OnPackageUpdating(::Windows::ApplicationModel::IPackageUpdatingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSecondaryTilesChanged@AppLifecycleReconciler@@AEAAJXZ
    long OnSecondaryTilesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetExecutableFromMigrationElement@AppLifecycleReconciler@@AEBAJAEAVMigrationContext@@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAVHString@Wrappers@WRL@Microsoft@@@Z
    long TryGetExecutableFromMigrationElement(MigrationContext &, WindissectOpaque *, ::Microsoft::WRL::Wrappers::HString *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetKnownIdentifierForMigrationElement@AppLifecycleReconciler@@AEBAJAEAVMigrationContext@@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    long TryGetKnownIdentifierForMigrationElement(MigrationContext &, WindissectOpaque *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPerformDesktopAppPinMigration@AppLifecycleReconciler@@AEBAJAEAVMigrationContext@@PEAUIApplication@StateRepository@Internal@Windows@@_N@Z
    long TryPerformDesktopAppPinMigration(MigrationContext &, ::Windows::Internal::StateRepository::IApplication *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnpinUninstalledPackageFromTaskbar@AppLifecycleReconciler@@CAJPEAUIPackage@ApplicationModel@Windows@@@Z
    static long TryUnpinUninstalledPackageFromTaskbar(::Windows::ApplicationModel::IPackage *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleReconciler@@EEAA@XZ
    virtual ~AppLifecycleReconciler();
};
