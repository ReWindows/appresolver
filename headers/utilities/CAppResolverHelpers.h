#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
class CAppResolverHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppID@CAppResolverHelpers@@UEAAJPEBG00PEAPEAG@Z
    virtual long GenerateAppID(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPathFromLink@CAppResolverHelpers@@UEAAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAPEAG2PEAK@Z
    virtual long GetAppPathFromLink(IShellLinkW *, IShellItem *, unsigned long, unsigned short * *, unsigned short * *, unsigned long *);
};
