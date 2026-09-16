#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
namespace AppResolverTelemetry {
class UPTM_CreateUserPinnedTileShortcut {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@UPTM_CreateUserPinnedTileShortcut@AppResolverTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UPTM_CreateUserPinnedTileShortcut@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UPTM_CreateUserPinnedTileShortcut@AppResolverTelemetry@@QEAA@XZ
    ~UPTM_CreateUserPinnedTileShortcut();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UPTM_CreateUserPinnedTileShortcut@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UPTM_CreateUserPinnedTileShortcut@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
