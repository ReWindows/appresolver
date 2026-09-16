#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
class CCacheAppInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CCacheAppInfo@@QEBAPEBGPEBX@Z
    unsigned short const * GetAppID(void const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutByIndex@CCacheAppInfo@@QEBAPEBVCCacheShortcut@@QEBXHPEAPEBU?$OFFSET@VCCacheShortcut@@@@@Z
    CCacheShortcut const * GetShortcutByIndex(void const * const, int, WindissectOpaque const * *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBestShortcut@CCacheAppInfo@@AEBAPEBVCCacheShortcut@@PEBXPEAPEBU?$OFFSET@VCCacheShortcut@@@@W4GetBestShortcutType@1@@Z
    CCacheShortcut const * _GetBestShortcut(void const *, WindissectOpaque const * *, int) const;
};
