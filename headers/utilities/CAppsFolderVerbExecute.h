#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 16 member(s).
class CAppsFolderVerbExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CAppsFolderVerbExecute@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CAppsFolderVerbExecute@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppsFolderVerbExecute@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@CAppsFolderVerbExecute@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@CAppsFolderVerbExecute@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@CAppsFolderVerbExecute@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CAppsFolderVerbExecute@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CAppsFolderVerbExecute@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CAppsFolderVerbExecute@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@CAppsFolderVerbExecute@@UEAAJH@Z
    virtual long SetShowWindow(int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppsFolderVerbExecute@@MEAA@XZ
    virtual ~CAppsFolderVerbExecute();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoOpenFileLocation@CAppsFolderVerbExecute@@AEAAJXZ
    long _DoOpenFileLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemAt@CAppsFolderVerbExecute@@AEAAJKPEAPEAUIShellItem2@@PEAKPEAPEAU_ITEMIDLIST_ABSOLUTE@@PEAPEAG@Z
    long _GetItemAt(unsigned long, IShellItem2* *, unsigned long *, _ITEMIDLIST_ABSOLUTE * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectionCount@CAppsFolderVerbExecute@@AEAAKXZ
    unsigned long _SelectionCount();
};
