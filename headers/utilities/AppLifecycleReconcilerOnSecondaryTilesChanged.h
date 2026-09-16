#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppLifecycleReconcilerOnSecondaryTilesChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleReconcilerOnSecondaryTilesChanged@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleReconcilerOnSecondaryTilesChanged@AppResolverTelemetry@@QEAA@XZ
    ~AppLifecycleReconcilerOnSecondaryTilesChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleReconcilerOnSecondaryTilesChanged@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleReconcilerOnSecondaryTilesChanged@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
