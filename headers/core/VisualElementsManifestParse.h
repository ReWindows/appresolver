#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 4 member(s).
namespace AppResolverTelemetry {
class VisualElementsManifestParse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VisualElementsManifestParse@AppResolverTelemetry@@QEAAXPEBGI@Z
    void StartActivity(unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualElementsManifestParse@AppResolverTelemetry@@QEAA@XZ
    ~VisualElementsManifestParse();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VisualElementsManifestParse@AppResolverTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VisualElementsManifestParse@AppResolverTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppResolverTelemetry
