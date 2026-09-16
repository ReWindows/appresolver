#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppUsageReconcilerRankChangedForApp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUsageReconcilerRankChangedForApp@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageReconcilerRankChangedForApp@AppResolverTelemetry@@QEAA@XZ
    ~AppUsageReconcilerRankChangedForApp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUsageReconcilerRankChangedForApp@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUsageReconcilerRankChangedForApp@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
