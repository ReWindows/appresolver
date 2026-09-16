#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppLifecycleReconcilerInitialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleReconcilerInitialize@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleReconcilerInitialize@AppResolverTelemetry@@QEAA@XZ
    ~AppLifecycleReconcilerInitialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleReconcilerInitialize@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleReconcilerInitialize@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
