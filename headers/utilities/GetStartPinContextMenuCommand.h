#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class GetStartPinContextMenuCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetStartPinContextMenuCommand@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetStartPinContextMenuCommand@AppResolverTelemetry@@QEAA@XZ
    ~GetStartPinContextMenuCommand();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetStartPinContextMenuCommand@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetStartPinContextMenuCommand@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
