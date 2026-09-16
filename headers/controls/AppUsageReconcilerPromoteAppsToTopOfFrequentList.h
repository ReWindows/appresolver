#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppUsageReconcilerPromoteAppsToTopOfFrequentList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageReconcilerPromoteAppsToTopOfFrequentList@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageReconcilerPromoteAppsToTopOfFrequentList@AppResolverTelemetry@@QEAA@XZ
    ~AppUsageReconcilerPromoteAppsToTopOfFrequentList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageReconcilerPromoteAppsToTopOfFrequentList@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageReconcilerPromoteAppsToTopOfFrequentList@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
