#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 7 member(s).
class CAppsFolderEnumIDList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAppsFolderEnumIDList@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CAppsFolderEnumIDList@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAppsFolderEnumIDList@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CAppsFolderEnumIDList@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppsFolderEnumIDList@@UEAA@XZ
    virtual ~CAppsFolderEnumIDList();
};
