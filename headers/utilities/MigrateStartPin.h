#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 6 member(s).
namespace AppResolverTelemetry {
class MigrateStartPin {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlreadyPinnedToStart@MigrateStartPin@AppResolverTelemetry@@QEAAXXZ
    void AlreadyPinnedToStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MigrateStartPin@AppResolverTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartScreenManagerExtensionFailed@MigrateStartPin@AppResolverTelemetry@@QEAAXXZ
    void StartScreenManagerExtensionFailed();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MigrateStartPin@AppResolverTelemetry@@QEAA@XZ
    ~MigrateStartPin();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MigrateStartPin@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MigrateStartPin@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
