#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
class OWSTR {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocString@OWSTR@@SAJPEAUIMemoryMappedHeap@@PEBGPEAU1@PEAPEAG@Z
    static long AllocString(IMemoryMappedHeap *, unsigned short const *, OWSTR *, unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OWSTR@@QEAA@XZ
    OWSTR();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocStringWorker@OWSTR@@CAJPEAUIMemoryMappedHeap@@PEBG_KPEAU1@PEAPEAG@Z
    static long _AllocStringWorker(IMemoryMappedHeap *, unsigned short const *, uint64_t, OWSTR *, unsigned short * *);
};
