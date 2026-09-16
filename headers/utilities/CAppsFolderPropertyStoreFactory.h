#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 6 member(s).
class CAppsFolderPropertyStoreFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppsFolderPropertyStoreFactory@@QEAA@PEAVCAppsFolder@@PEFBU_ITEMID_CHILD@@PEAJ@Z
    CAppsFolderPropertyStoreFactory(CAppsFolder *, _ITEMID_CHILD & volatile *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CAppsFolderPropertyStoreFactory@@UEAAJW4GETPROPERTYSTOREFLAGS@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(int, IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStoreForKeys@CAppsFolderPropertyStoreFactory@@UEAAJPEBU_tagpropertykey@@IW4GETPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStoreForKeys(_tagpropertykey const *, unsigned int, int, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppsFolderPropertyStoreFactory@@UEAA@XZ
    virtual ~CAppsFolderPropertyStoreFactory();
};
