#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
namespace Windows::Internal::ShellHelpers {
class PropertySetHelper {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@XZ
    ~PropertySetHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z
    long GetPropVal(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Internal::ShellHelpers
