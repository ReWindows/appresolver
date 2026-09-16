#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 2 member(s).
class TileStoreAppsFolder {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAllPackagedAppsProperties@TileStoreAppsFolder@@YAJPEAUIObjectCollection@@@Z
    long AddAllPackagedAppsProperties(IObjectCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagedAppProperties@TileStoreAppsFolder@@YAJPEBGPEAPEAUIPropertyStore@@@Z
    long GetPackagedAppProperties(unsigned short const *, IPropertyStore * *);
};
