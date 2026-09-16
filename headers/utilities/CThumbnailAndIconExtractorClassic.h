#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 6 member(s).
class CThumbnailAndIconExtractorClassic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractIconW@CThumbnailAndIconExtractorClassic@@UEAAJAEBVCPropertyStoreHelper@@PEBGIPEAPEAUHICON__@@2II@Z
    virtual long ExtractIconW(CPropertyStoreHelper const &, unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CThumbnailAndIconExtractorClassic@@UEAAJAEBVCPropertyStoreHelper@@IPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(CPropertyStoreHelper const &, unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CThumbnailAndIconExtractorClassic@@UEAAJAEBVCPropertyStoreHelper@@IPEAPEAUHBITMAP__@@@Z
    virtual long GetThumbnail(CPropertyStoreHelper const &, unsigned int, HBITMAP__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailAndIconExtractorClassic@@UEAA@XZ
    virtual ~CThumbnailAndIconExtractorClassic();
};
