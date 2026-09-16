#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 8 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromImpersonationToken(void *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromProcessHandle(void *, unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerProcessImageName@CallerIdentity@@YAJPEAGPEAK@Z
    long GetCallerProcessImageName(unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z
    long GetImpersonationTokenFromProcess(void *, unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z
    long GetPackageFullNameFromAppId(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessAppContainer(void *, bool *);
};
