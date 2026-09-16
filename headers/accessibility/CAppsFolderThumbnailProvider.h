#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 9 member(s).
class CAppsFolderThumbnailProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CAppsFolderThumbnailProvider@@UEAAJPEAPEAUHBITMAP__@@@Z
    virtual long Extract(HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CAppsFolderThumbnailProvider@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CAppsFolderThumbnailProvider@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CAppsFolderThumbnailProvider@@UEAAJPEAGKPEAKPEBUtagSIZE@@K1@Z
    virtual long GetLocation(unsigned short *, unsigned long, unsigned long *, tagSIZE const *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CAppsFolderThumbnailProvider@@UEAAJIPEAPEAUHBITMAP__@@PEAW4WTS_ALPHATYPE@@@Z
    virtual long GetThumbnail(unsigned int, HBITMAP__* *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppsFolderThumbnailProvider@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppsFolderThumbnailProvider@@EEAA@XZ
    virtual ~CAppsFolderThumbnailProvider();
};
