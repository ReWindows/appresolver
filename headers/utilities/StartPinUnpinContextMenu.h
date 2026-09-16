#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 17 member(s).
class StartPinUnpinContextMenu {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@StartPinUnpinContextMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StartPinUnpinContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@StartPinUnpinContextMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@StartPinUnpinContextMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartPinUnpinContextMenu@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartPinUnpinContextMenu@@QEAA@XZ
    StartPinUnpinContextMenu();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartPinUnpinContextMenu@@UEAA@XZ
    virtual ~StartPinUnpinContextMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStartScreenManagerInitialized@StartPinUnpinContextMenu@@AEAAJXZ
    long EnsureStartScreenManagerInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutCustomizationRestrictionType@StartPinUnpinContextMenu@@AEBAJPEAW4StartCollectionCustomizationRestrictionType@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z
    long GetLayoutCustomizationRestrictionType(int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommandImpl@StartPinUnpinContextMenu@@AEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    long InvokeCommandImpl(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellItemBlockedFromPinning@StartPinUnpinContextMenu@@CAJPEAUIShellItem@@PEA_N@Z
    static long IsShellItemBlockedFromPinning(IShellItem *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenuImpl@StartPinUnpinContextMenu@@AEAAJPEAUHMENU__@@IIII@Z
    long QueryContextMenuImpl(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCallerIdentity@StartPinUnpinContextMenu@@CAJXZ
    static long ValidateCallerIdentity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayStringForAction@StartPinUnpinContextMenu@@AEAAJAEBW4ContextMenuItemAction@@PEAGH@Z
    long _GetDisplayStringForAction(int const &, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RetrieveShellItemForMenu@StartPinUnpinContextMenu@@AEAAJPEAPEAUIShellItem@@@Z
    long _RetrieveShellItemForMenu(IShellItem * *);
};
