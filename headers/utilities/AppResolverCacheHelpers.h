#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 8 member(s).
class AppResolverCacheHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFullIDList@AppResolverCacheHelpers@@YAQEAU_ITEMIDLIST_ABSOLUTE@@PEBVCCacheShortcut@@PEBX@Z
    _ITEMIDLIST_ABSOLUTE * const CreateFullIDList(CCacheShortcut const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheDirFolder@AppResolverCacheHelpers@@YAJPEBVCCacheDir@@PEBXPEAPEAUIShellFolder@@@Z
    long GetCacheDirFolder(CCacheDir const *, void const *, IShellFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSameArguments@AppResolverCacheHelpers@@YA_NPEBVCCacheShortcut@@PEBXPEBG@Z
    bool HasSameArguments(CCacheShortcut const *, void const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingShortcut@AppResolverCacheHelpers@@YA_NPEBXPEBVCCacheShortcut@@PEBG222@Z
    bool IsMatchingShortcut(void const *, CCacheShortcut const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameAppID@AppResolverCacheHelpers@@YA_NPEBVCCacheAppInfo@@PEBXPEBG@Z
    bool IsSameAppID(CCacheAppInfo const *, void const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameAppPath@AppResolverCacheHelpers@@YA_NPEBVCCacheAppInfo@@PEBXPEBG@Z
    bool IsSameAppPath(CCacheAppInfo const *, void const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentIDList@AppResolverCacheHelpers@@YAQEBU_ITEMIDLIST_ABSOLUTE@@PEBVCCacheShortcut@@PEBX@Z
    _ITEMIDLIST_ABSOLUTE const * const ParentIDList(CCacheShortcut const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDarwinLink@AppResolverCacheHelpers@@YAXPEBVCCacheShortcut@@PEBX_N@Z
    void RegisterDarwinLink(CCacheShortcut const *, void const *, bool);
};
