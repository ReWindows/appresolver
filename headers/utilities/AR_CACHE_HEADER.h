#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
class AR_CACHE_HEADER {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLanguageChanged@AR_CACHE_HEADER@@QEBA_NPEBX@Z
    bool HasLanguageChanged(void const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AR_CACHE_HEADER@@QEAAJPEAUIMemoryMappedHeap@@@Z
    long Initialize(IMemoryMappedHeap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLanguageList@AR_CACHE_HEADER@@QEBAJPEAPEAG@Z
    long _GetLanguageList(unsigned short * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsJapaneseSortOrderEnabled@AR_CACHE_HEADER@@QEBA_NXZ
    bool _IsJapaneseSortOrderEnabled() const;
};
