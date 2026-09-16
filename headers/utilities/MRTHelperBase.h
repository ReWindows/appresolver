#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
namespace ShellMRTHelper {
class MRTHelperBase {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ
    ~MRTHelperBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ
    long InitializeMRTObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z
    long Resolve(int, unsigned short const *, unsigned short * *);
};
} // namespace ShellMRTHelper
