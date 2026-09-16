#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
class CAppResolverFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppResolverFactory@@QEAA@XZ
    CAppResolverFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAppResolverFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
};
