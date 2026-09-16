#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 10 member(s).
class UserPinnedTileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePinnedItemFromShellItem@UserPinnedTileManager@@UEAAJPEAUIShellItem@@@Z
    virtual long CreatePinnedItemFromShellItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePinnedItemFromShellLink@UserPinnedTileManager@@UEAAJPEAUIShellLinkW@@@Z
    virtual long CreatePinnedItemFromShellLink(IShellLinkW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePinnedItem@UserPinnedTileManager@@UEAAJPEAUITileInfo@@@Z
    virtual long DeletePinnedItem(ITileInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePinnedItemByAppId@UserPinnedTileManager@@UEAAJPEBG@Z
    virtual long DeletePinnedItemByAppId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@UserPinnedTileManager@@UEAAJPEAUIVisualElementEnumerator@@PEAUITileManager@@@Z
    virtual long Initialize(IVisualElementEnumerator *, ITileManager *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserPinnedTileManager@@QEAA@XZ
    UserPinnedTileManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserPinnedTileManager@@UEAA@XZ
    virtual ~UserPinnedTileManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePinnedItemImpl@UserPinnedTileManager@@AEAAJPEAUIShellItem@@PEAUIShellLinkW@@@Z
    long _CreatePinnedItemImpl(IShellItem *, IShellLinkW *);
};
