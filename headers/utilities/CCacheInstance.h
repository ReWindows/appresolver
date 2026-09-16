#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 19 member(s).
class CCacheInstance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherShortcutForAppID@CCacheInstance@@QEBAPEBVCCacheShortcut@@PEBG@Z
    CCacheShortcut const * FindLauncherShortcutForAppID(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherShortcutForAppPath@CCacheInstance@@QEBAPEBVCCacheShortcut@@PEBG@Z
    CCacheShortcut const * FindLauncherShortcutForAppPath(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingShortcut@CCacheInstance@@QEBAPEBVCCacheShortcut@@PEBG000W4FIND_MATCHING_SHORTCUT_OPTIONS@@@Z
    CCacheShortcut const * FindMatchingShortcut(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRoot@CCacheInstance@@QEBAPEBVCCacheRoot@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    CCacheRoot const * FindRoot(_ITEMIDLIST_ABSOLUTE const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppByIndex@CCacheInstance@@QEBAPEBVCCacheAppInfo@@H@Z
    CCacheAppInfo const * GetAppByIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppCount@CCacheInstance@@QEBAHXZ
    int GetAppCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectoryCount@CCacheInstance@@QEBAHXZ
    int GetDirectoryCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatestCache@CCacheInstance@@QEAAJPEAUIMemoryMappedCacheMgr@@PEAPEAV1@@Z
    long GetLatestCache(IMemoryMappedCacheMgr *, CCacheInstance * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherShortcutByIndex@CCacheInstance@@QEBAPEBVCCacheShortcut@@H@Z
    CCacheShortcut const * GetLauncherShortcutByIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherShortcutCount@CCacheInstance@@QEBAHXZ
    int GetLauncherShortcutCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutByIndex@CCacheInstance@@QEBAPEBVCCacheShortcut@@H@Z
    CCacheShortcut const * GetShortcutByIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutCount@CCacheInstance@@QEBAHXZ
    int GetShortcutCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCache@CCacheInstance@@QEAAJPEAUIMemoryMappedCacheMgr@@@Z
    long LoadCache(IMemoryMappedCacheMgr *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCacheInstance@@QEAAJXZ
    long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCache@CCacheInstance@@QEAAJ_N@Z
    long ValidateCache(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateCacheObject@CCacheInstance@@AEAAJXZ
    long _ValidateCacheObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateSignatureOfCacheItems@CCacheInstance@@AEAAJXZ
    long _ValidateSignatureOfCacheItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerifyCacheAndSetHeader@CCacheInstance@@AEAAJXZ
    long _VerifyCacheAndSetHeader();
};
