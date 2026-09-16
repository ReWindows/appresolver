#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class ARCM_RefreshCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ARCM_RefreshCache@AppResolverTelemetry@@QEAAXW4START_MENU_REFRESH_CACHE_FLAGS@@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ARCM_RefreshCache@AppResolverTelemetry@@QEAA@XZ
    ~ARCM_RefreshCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ARCM_RefreshCache@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ARCM_RefreshCache@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
