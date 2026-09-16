#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 21 member(s).
class SharedFactoryHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedFactoryHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationStatics@SharedFactoryHelper@@UEAAJPEAPEAUIApplicationStatics@StateRepository@Internal@Windows@@@Z
    virtual long GetApplicationStatics(::Windows::Internal::StateRepository::IApplicationStatics * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedFactoryHelper@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedFactoryHelper@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRepoUser@SharedFactoryHelper@@UEAAJPEAPEAUIUser@StateRepository@Internal@Windows@@@Z
    virtual long GetStateRepoUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileStore@SharedFactoryHelper@@UEAAJPEAPEAUITileStore@Tiles@Internal@Windows@@@Z
    virtual long GetTileStore(::Windows::Internal::Tiles::ITileStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileViewStatics@SharedFactoryHelper@@UEAAJPEAPEAUITileViewStatics@StateRepository@Internal@Windows@@@Z
    virtual long GetTileViewStatics(::Windows::Internal::StateRepository::ITileViewStatics * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedFactoryHelper@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedTileIdentifierStatics@SharedFactoryHelper@@UEAAJPEAPEAUIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@Z
    virtual long GetUnifiedTileIdentifierStatics(::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedFactoryHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedFactoryHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedFactoryHelper@@QEAA@XZ
    SharedFactoryHelper();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedFactoryHelper@@EEAA@XZ
    virtual ~SharedFactoryHelper();
};
