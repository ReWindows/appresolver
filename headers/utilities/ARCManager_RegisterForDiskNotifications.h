#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 6 member(s).
namespace AppResolverTelemetry {
class ARCManager_RegisterForDiskNotifications {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ARCManager_RegisterForDiskNotifications@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ARCManager_RegisterForDiskNotifications@AppResolverTelemetry@@QEAA@XZ
    ~ARCManager_RegisterForDiskNotifications();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ARCManager_RegisterForDiskNotifications@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ARCManager_RegisterForDiskNotifications@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
