#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppUsageReconcilerAllRanksHaveChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageReconcilerAllRanksHaveChanged@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageReconcilerAllRanksHaveChanged@AppResolverTelemetry@@QEAA@XZ
    ~AppUsageReconcilerAllRanksHaveChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageReconcilerAllRanksHaveChanged@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageReconcilerAllRanksHaveChanged@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
