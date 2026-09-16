#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 10 member(s).
class CAppEnumFilter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictionIndexForShortcut@CAppEnumFilter@@UEAAIPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual unsigned int GetRestrictionIndexForShortcut(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppRestricted@CAppEnumFilter@@UEAA_NI@Z
    virtual bool IsAppRestricted(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultProgramsDisabled@CAppEnumFilter@@SA_NXZ
    static bool IsDefaultProgramsDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoRunEnabled@CAppEnumFilter@@SA_NXZ
    static bool IsNoRunEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoSetFoldersEnabled@CAppEnumFilter@@SA_NXZ
    static bool IsNoSetFoldersEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRestrictionState@CAppEnumFilter@@UEAAXXZ
    virtual void RefreshRestrictionState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppEnumFilter@@UEAA@XZ
    virtual ~CAppEnumFilter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRestrictionPidl@CAppEnumFilter@@AEAAQEAU_ITEMIDLIST_ABSOLUTE@@I@Z
    _ITEMIDLIST_ABSOLUTE * const _GetRestrictionPidl(unsigned int);
};
