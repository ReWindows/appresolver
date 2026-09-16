#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
namespace ShellMRTHelper {
class Common {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z
    bool HasMsResourceUriScheme(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleFactorToResourceScale@Common@ShellMRTHelper@@YA?AW4RESOURCE_SCALE@@W4DEVICE_SCALE_FACTOR@@@Z
    int ScaleFactorToResourceScale(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z
    long TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(HSTRING__*, unsigned short * *);
};
} // namespace ShellMRTHelper
