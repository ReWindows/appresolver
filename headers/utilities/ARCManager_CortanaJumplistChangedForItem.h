#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class ARCManager_CortanaJumplistChangedForItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ARCManager_CortanaJumplistChangedForItem@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ARCManager_CortanaJumplistChangedForItem@AppResolverTelemetry@@QEAA@XZ
    ~ARCManager_CortanaJumplistChangedForItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ARCManager_CortanaJumplistChangedForItem@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ARCManager_CortanaJumplistChangedForItem@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
