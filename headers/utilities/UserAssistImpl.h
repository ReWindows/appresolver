#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 2 member(s).
class UserAssistImpl {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z
    long GetCachedUserAssist(IShellUserAssist * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z
    IShellUserAssist * GetUserAssistWorker(_GUID const &);
};
