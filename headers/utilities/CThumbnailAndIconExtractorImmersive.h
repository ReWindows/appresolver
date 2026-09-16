#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 9 member(s).
class CThumbnailAndIconExtractorImmersive {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThumbnailAndIconExtractorImmersive@@QEAA@PEAUIShellItem2@@W4ThumbnailOptions@@@Z
    CThumbnailAndIconExtractorImmersive(IShellItem2*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractIconW@CThumbnailAndIconExtractorImmersive@@UEAAJAEBVCPropertyStoreHelper@@PEBGIPEAPEAUHICON__@@2II@Z
    virtual long ExtractIconW(CPropertyStoreHelper const &, unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CThumbnailAndIconExtractorImmersive@@UEAAJAEBVCPropertyStoreHelper@@IPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(CPropertyStoreHelper const &, unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CThumbnailAndIconExtractorImmersive@@UEAAJAEBVCPropertyStoreHelper@@IPEAPEAUHBITMAP__@@@Z
    virtual long GetThumbnail(CPropertyStoreHelper const &, unsigned int, HBITMAP__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailAndIconExtractorImmersive@@UEAA@XZ
    virtual ~CThumbnailAndIconExtractorImmersive();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLogoLoadOptions@CThumbnailAndIconExtractorImmersive@@AEAA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@I@Z
    WindissectOpaque _GetLogoLoadOptions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryLoadIconUsingLogoLoader@CThumbnailAndIconExtractorImmersive@@AEAAJAEBVCPropertyStoreHelper@@IPEAPEAUHICON__@@@Z
    long _TryLoadIconUsingLogoLoader(CPropertyStoreHelper const &, unsigned int, HICON__* *);
};
