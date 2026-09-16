#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
class CWRLObjectWithSite {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWRLObjectWithSite@@QEAA@XZ
    CWRLObjectWithSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CWRLObjectWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
};
