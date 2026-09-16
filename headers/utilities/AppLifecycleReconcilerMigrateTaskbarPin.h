#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
namespace AppResolverTelemetry {
class AppLifecycleReconcilerMigrateTaskbarPin {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlreadyPinnedToTaskbar@AppLifecycleReconcilerMigrateTaskbarPin@AppResolverTelemetry@@QEAAXXZ
    void AlreadyPinnedToTaskbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppLifecycleReconcilerMigrateTaskbarPin@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppLifecycleReconcilerMigrateTaskbarPin@AppResolverTelemetry@@QEAA@XZ
    ~AppLifecycleReconcilerMigrateTaskbarPin();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppLifecycleReconcilerMigrateTaskbarPin@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppLifecycleReconcilerMigrateTaskbarPin@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
