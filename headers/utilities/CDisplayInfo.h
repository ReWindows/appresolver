#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 12 member(s).
class CDisplayInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CDisplayInfo@@UEAAIXZ
    virtual unsigned int GetBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColor@CDisplayInfo@@UEAAIXZ
    virtual unsigned int GetForegroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoloBoundingBox@CDisplayInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetHoloBoundingBox();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoloContent@CDisplayInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetHoloContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoPath@CDisplayInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetLogoPath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInstallPath@CDisplayInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetPackageInstallPath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortDisplayName@CDisplayInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetShortDisplayName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileFlags@CDisplayInfo@@UEAAIXZ
    virtual unsigned int GetTileFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTinyLogoPath@CDisplayInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetTinyLogoPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateLogoProperties@CDisplayInfo@@UEAAJPEAUIPropertyStore@@@Z
    virtual long PopulateLogoProperties(IPropertyStore *);
};
