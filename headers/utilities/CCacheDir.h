#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 2 member(s).
class CCacheDir {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CCacheDir@@QEBAPEBU_ITEMIDLIST_ABSOLUTE@@PEBX@Z
    _ITEMIDLIST_ABSOLUTE const * GetIDList(void const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCacheDir@@QEAAJPEAUIMemoryMappedHeap@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBG@Z
    long Initialize(IMemoryMappedHeap *, _ITEMIDLIST_ABSOLUTE const *, unsigned short const *);
};
