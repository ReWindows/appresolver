#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 8 member(s).
class CCacheTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromAnotherInstance@CCacheTile@@QEAAJPEBV1@PEBXPEAUIMemoryMappedHeap@@@Z
    long CopyFromAnotherInstance(CCacheTile const *, void const *, IMemoryMappedHeap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoloBoundingBox@CCacheTile@@QEBAPEBGPEBX@Z
    unsigned short const * GetHoloBoundingBox(void const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoloContent@CCacheTile@@QEBAPEBGPEBX@Z
    unsigned short const * GetHoloContent(void const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateHoloProperties@CCacheTile@@QEBAJPEBXPEAUIPropertyStore@@@Z
    long PopulateHoloProperties(void const *, IPropertyStore *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateLogoProperties@CCacheTile@@QEBAJPEBXPEAUIPropertyStore@@@Z
    long PopulateLogoProperties(void const *, IPropertyStore *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyStore@CCacheTile@@QEBAJPEBXPEAUIPropertyStore@@@Z
    long PopulatePropertyStore(void const *, IPropertyStore *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferTileData@CCacheTile@@QEAAJPEAUTILE_DATA@@PEAUIMemoryMappedHeap@@@Z
    long TransferTileData(TILE_DATA *, IMemoryMappedHeap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCacheTile@@QEBAJKPEBUAR_CACHE_HEADER@@@Z
    long Validate(unsigned long, AR_CACHE_HEADER const *) const;
};
