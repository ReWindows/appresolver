#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 19 member(s).
class ShortcutMigrator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShortcutMigrator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShortcutMigrator@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShortcutMigrator@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShortcutMigrator@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShortcutMigrator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShortcutMigrator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShortcutMigrator@@QEAAJPEAUIAppResolverDataLayerManager@@@Z
    long RuntimeClassInitialize(IAppResolverDataLayerManager *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShortcutMigrator@@QEAA@XZ
    ShortcutMigrator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShortcutMigrator@@UEAA@XZ
    virtual ~ShortcutMigrator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppResolverCacheUpdated@ShortcutMigrator@@AEAAXXZ
    void OnAppResolverCacheUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMigratePackagedAumidToShortcut@ShortcutMigrator@@AEAA_NAEAVMigrationContext@@PEAUIShortcutInfo@@PEAUIShortcutMigrationInfo@@PEBG@Z
    bool TryMigratePackagedAumidToShortcut(MigrationContext &, IShortcutInfo *, IShortcutMigrationInfo *, unsigned short const *);
};
