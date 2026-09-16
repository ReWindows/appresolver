#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
class CCacheShortcut {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromAnotherInstance@CCacheShortcut@@QEAAJPEBV1@PEBXPEAUIMemoryMappedHeap@@PEAU?$OFFSET@VCCacheDir@@@@@Z
    long CopyFromAnotherInstance(CCacheShortcut const *, void const *, IMemoryMappedHeap *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CCacheShortcut@@QEBAPEBGPEBX@Z
    unsigned short const * GetAppID(void const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyStore@CCacheShortcut@@QEBAJPEBXPEAUIPropertyStore@@@Z
    long PopulatePropertyStore(void const *, IPropertyStore *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferLinkData@CCacheShortcut@@QEAAJPEAUIMemoryMappedHeap@@PEBUSHORTCUT_DATA@@PEBU_ITEMID_CHILD@@@Z
    long TransferLinkData(IMemoryMappedHeap *, SHORTCUT_DATA const *, _ITEMID_CHILD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCacheShortcut@@QEBAJKPEBUAR_CACHE_HEADER@@@Z
    long Validate(unsigned long, AR_CACHE_HEADER const *) const;
};
