#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLpcwstr@String@Internal@Windows@@QEBAJPEAPEBG@Z
    long GetLpcwstr(unsigned short const * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
};
} // namespace Windows::Internal
