#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
namespace AppResolverTelemetry {
class UPTM_DeleteUserPinnedTileShortcut {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UPTM_DeleteUserPinnedTileShortcut@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UPTM_DeleteUserPinnedTileShortcut@AppResolverTelemetry@@QEAA@XZ
    ~UPTM_DeleteUserPinnedTileShortcut();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UPTM_DeleteUserPinnedTileShortcut@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UPTM_DeleteUserPinnedTileShortcut@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
