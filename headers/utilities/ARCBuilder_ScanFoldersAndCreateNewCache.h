#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class ARCBuilder_ScanFoldersAndCreateNewCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ARCBuilder_ScanFoldersAndCreateNewCache@AppResolverTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ARCBuilder_ScanFoldersAndCreateNewCache@AppResolverTelemetry@@QEAA@XZ
    ~ARCBuilder_ScanFoldersAndCreateNewCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ARCBuilder_ScanFoldersAndCreateNewCache@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ARCBuilder_ScanFoldersAndCreateNewCache@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
