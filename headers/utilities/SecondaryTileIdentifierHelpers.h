#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 2 member(s).
class SecondaryTileIdentifierHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z
    long CreateFullyQualifiedTileIdentifier(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z
    long GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(unsigned short const *, unsigned short * *, unsigned short * *);
};
