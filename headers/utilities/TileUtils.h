#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
class TileUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z
    long ConvertFileUriToFilePath(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePackageInfo@TileUtils@@YAJPEBGPEAPEAE@Z
    long CreatePackageInfo(unsigned short const *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FigureOutClosestScaleFactorForLogoSize@TileUtils@@YA?AW4DEVICE_SCALE_FACTOR@@I@Z
    int FigureOutClosestScaleFactorForLogoSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedLogoPath@TileUtils@@YAJPEAUIPropertyStore@@PEAW4DEVICE_SCALE_FACTOR@@PEAPEAG@Z
    long GetLocalizedLogoPath(IPropertyStore *, int *, unsigned short * *);
};
