#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
class CAppInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CAppInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetAppID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnableShortcut@CAppInfo@@UEAAJPEAPEAUIShortcutInfo@@@Z
    virtual long GetPinnableShortcut(IShortcutInfo * *);
};
