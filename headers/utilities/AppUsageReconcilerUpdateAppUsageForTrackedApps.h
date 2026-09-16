#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppUsageReconcilerUpdateAppUsageForTrackedApps {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageReconcilerUpdateAppUsageForTrackedApps@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageReconcilerUpdateAppUsageForTrackedApps@AppResolverTelemetry@@QEAA@XZ
    ~AppUsageReconcilerUpdateAppUsageForTrackedApps();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageReconcilerUpdateAppUsageForTrackedApps@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageReconcilerUpdateAppUsageForTrackedApps@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
