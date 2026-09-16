#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 16 member(s).
class MigrationContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppResolver@MigrationContext@@QEAAJPEAPEAUIApplicationResolver@@@Z
    long GetAppResolver(IApplicationResolver * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseStartTileCollection@MigrationContext@@QEAAJPEAPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    long GetBaseStartTileCollection(::WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarPinList@MigrationContext@@QEAAJPEAPEAUIPinnedList3@@@Z
    long GetTaskbarPinList(IPinnedList3* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateAppIdentity@MigrationContext@@QEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0@Z
    long MigrateAppIdentity(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateAppIdentityWithShortcut@MigrationContext@@QEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0PEAUIShortcutInfo@@PEA_N@Z
    long MigrateAppIdentityWithShortcut(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, IShortcutInfo *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateInstallTime@MigrationContext@@QEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0@Z
    long MigrateInstallTime(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateRecentlyAddedState@MigrationContext@@QEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0@Z
    long MigrateRecentlyAddedState(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MigrationContext@@QEAA@XZ
    ~MigrationContext();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumidFromUnifiedTileId@MigrationContext@@CAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAPEAUHSTRING__@@@Z
    static long GetAumidFromUnifiedTileId(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarTombstoneForAppId@MigrationContext@@AEAAJPEAUIPinnedList@@PEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long GetTaskbarTombstoneForAppId(IPinnedList *, unsigned short const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateAumidDependencies@MigrationContext@@CAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0@Z
    static void MigrateAumidDependencies(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateStartPinIdToId@MigrationContext@@AEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0PEA_N@Z
    long MigrateStartPinIdToId(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateTaskbarPinIdToId@MigrationContext@@AEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@0PEAUIShortcutInfo@@PEA_N@Z
    long MigrateTaskbarPinIdToId(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, IShortcutInfo *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateTaskbarPinPathToId@MigrationContext@@AEAAJPEBGPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEA_N@Z
    long MigrateTaskbarPinPathToId(unsigned short const *, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateTaskbarPinPathToShortcut@MigrationContext@@AEAAJPEBGPEBU_ITEMIDLIST_ABSOLUTE@@PEA_N@Z
    long MigrateTaskbarPinPathToShortcut(unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateTaskbarPinWin32AumidToShortcut@MigrationContext@@AEAAJPEBGPEBU_ITEMIDLIST_ABSOLUTE@@PEA_N@Z
    long MigrateTaskbarPinWin32AumidToShortcut(unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, bool *);
};
