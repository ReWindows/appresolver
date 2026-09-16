#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 15 member(s).
class CDummyUnknown {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDummyUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDummyUnknown@@QEAA@XZ
    CDummyUnknown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CDummyUnknown@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CDummyUnknown@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMode@CDummyUnknown@@UEAAJPEAW4FOLDER_ENUM_MODE@@@Z
    virtual long GetMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDummyUnknown@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDummyUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDummyUnknown@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@CDummyUnknown@@UEAAJW4FOLDER_ENUM_MODE@@@Z
    virtual long SetMode(int);
};
