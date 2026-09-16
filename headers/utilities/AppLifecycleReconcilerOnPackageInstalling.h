#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class AppLifecycleReconcilerOnPackageInstalling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleReconcilerOnPackageInstalling@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleReconcilerOnPackageInstalling@AppResolverTelemetry@@QEAA@XZ
    ~AppLifecycleReconcilerOnPackageInstalling();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleReconcilerOnPackageInstalling@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleReconcilerOnPackageInstalling@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
