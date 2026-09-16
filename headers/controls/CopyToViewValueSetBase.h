#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
class CopyToViewValueSetBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z
    virtual long Update(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CopyToViewValueSetBase@@QEAA@XZ
    ~CopyToViewValueSetBase();
};
