#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 6 member(s).
class CImmersiveAppOpenExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CImmersiveAppOpenExecute@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapability@CImmersiveAppOpenExecute@@UEAAJPEAW4EXECUTE_COMMAND_HANDLER_CAPABILITIES@@@Z
    virtual long GetCapability(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImmersiveAppOpenExecute@@UEAAJPEAUIPropertyStore@@@Z
    virtual long Initialize(IPropertyStore *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveAppOpenExecute@@EEAA@XZ
    virtual ~CImmersiveAppOpenExecute();
};
