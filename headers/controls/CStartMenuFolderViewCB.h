#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 11 member(s).
class CStartMenuFolderViewCB {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnPropertyList@CStartMenuFolderViewCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetColumnPropertyList(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CStartMenuFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByProperty@CStartMenuFolderViewCB@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupSubsetCount@CStartMenuFolderViewCB@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSize@CStartMenuFolderViewCB@@UEAAJPEAI@Z
    virtual long GetIconSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CStartMenuFolderViewCB@@UEAAJPEAUSORTCOLUMN@@IPEAI@Z
    virtual long GetSortColumns(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CStartMenuFolderViewCB@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageSFVCB@CStartMenuFolderViewCB@@UEAAJI_K_J@Z
    virtual long MessageSFVCB(unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStartMenuFolderViewCB@@UEAA@XZ
    virtual ~CStartMenuFolderViewCB();
};
