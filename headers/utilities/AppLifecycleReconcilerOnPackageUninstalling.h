#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppLifecycleReconcilerOnPackageUninstalling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleReconcilerOnPackageUninstalling@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleReconcilerOnPackageUninstalling@AppResolverTelemetry@@QEAA@XZ
    ~AppLifecycleReconcilerOnPackageUninstalling();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleReconcilerOnPackageUninstalling@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleReconcilerOnPackageUninstalling@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
