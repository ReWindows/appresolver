#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
class MRTUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignDefaultContextWithTileAttributes@MRTUtils@@YAJPEAUIMrtResourceManager@@PEBGPEBW4DEVICE_SCALE_FACTOR@@PEBW4TILE_DUI_TEMPLATE@@PEBW4TILE_THEME_SELECTOR@@@Z
    long AlignDefaultContextWithTileAttributes(IMrtResourceManager *, unsigned short const *, int const *, int const *, int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNonMRTImageSubstring@MRTUtils@@YAPEBGPEBG@Z
    unsigned short const * FindNonMRTImageSubstring(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsAppxUriToFilePath@MRTUtils@@YAJPEBGPEAUIResourceMap@@PEAUPACKAGE_INFO@@PEAPEAG@Z
    long MsAppxUriToFilePath(unsigned short const *, IResourceMap *, PACKAGE_INFO *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMRTFilePath@MRTUtils@@YAJPEAUIMrtResourceManager@@PEBGPEAW4DEVICE_SCALE_FACTOR@@PEBW4TILE_DUI_TEMPLATE@@PEAW4TILE_THEME_SELECTOR@@11PEAPEAGPEA_N@Z
    long ProcessMRTFilePath(IMrtResourceManager *, unsigned short const *, int *, int const *, int *, unsigned short const *, unsigned short const *, unsigned short * *, bool *);
};
