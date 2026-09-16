#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class PinUserCreatedItemToStart {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PinUserCreatedItemToStart@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PinUserCreatedItemToStart@AppResolverTelemetry@@QEAA@XZ
    ~PinUserCreatedItemToStart();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PinUserCreatedItemToStart@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PinUserCreatedItemToStart@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
