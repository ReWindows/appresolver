#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 14 member(s).
class CImmersiveOpenBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveOpenBase@@QEAA@XZ
    CImmersiveOpenBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CImmersiveOpenBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CImmersiveOpenBase@@UEAAJPEAW4AHE_TYPE@@@Z
    virtual long GetValue(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImmersiveOpenBase@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@CImmersiveOpenBase@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@CImmersiveOpenBase@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@CImmersiveOpenBase@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CImmersiveOpenBase@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CImmersiveOpenBase@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CImmersiveOpenBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@CImmersiveOpenBase@@UEAAJH@Z
    virtual long SetShowWindow(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveOpenBase@@QEAA@XZ
    ~CImmersiveOpenBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLaunchAppIDAndArguments@CImmersiveOpenBase@@IEAAJAEAVCPropertyStoreHelper@@PEAPEAG11PEA_N@Z
    long _GetLaunchAppIDAndArguments(CPropertyStoreHelper &, unsigned short * *, unsigned short * *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LaunchImmersiveApp@CImmersiveOpenBase@@KAJPEBG000PEAUIUnknown@@UtagPOINT@@W4ACTIVATEOPTIONSINTERNAL@@@Z
    static long s_LaunchImmersiveApp(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IUnknown *, tagPOINT, int);
};
