#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 26 member(s).
class CAppResolverCacheBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScanFoldersAndCreateNewCache@CAppResolverCacheBuilder@@QEAAJPEAVCAppResolverCacheManager@@IPEBUROOTSCANINFO@@W4START_MENU_REFRESH_CACHE_FLAGS@@@Z
    long ScanFoldersAndCreateNewCache(CAppResolverCacheManager *, unsigned int, ROOTSCANINFO const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddShortcutToCache@CAppResolverCacheBuilder@@AEAAJPEBVCCacheInstance@@PEAU?$OFFSET@VCCacheDir@@@@W4ShortcutInfoRootType@@PEBGPEAUIShellFolder@@PEBU_ITEMID_CHILD@@PEBVCCacheShortcut@@@Z
    long _AddShortcutToCache(CCacheInstance const *, WindissectOpaque *, int, unsigned short const *, IShellFolder *, _ITEMID_CHILD const *, CCacheShortcut const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddUserPinnedShortcutToStart@CAppResolverCacheBuilder@@AEAAJPEBVCCacheShortcut@@QEBX@Z
    long _AddUserPinnedShortcutToStart(CCacheShortcut const *, void const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CAppResolverCacheBuilder@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyRootFromPreviousCache@CAppResolverCacheBuilder@@AEAAJPEAVCCacheInstance@@PEAUIShellFolder@@PEBVCCacheRoot@@PEAU?$OFFSET@VCCacheDir@@@@W4ShortcutInfoRootType@@@Z
    long _CopyRootFromPreviousCache(CCacheInstance *, IShellFolder *, CCacheRoot const *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAppInfoFromShortcuts@CAppResolverCacheBuilder@@AEAAJAEBV?$CDPAWeak@U?$OFFSET@VCCacheShortcut@@@@@@HHPEAU?$OFFSET@VCCacheAppInfo@@@@PEAPEBU?$OFFSET@VCCacheShortcut@@@@@Z
    long _CreateAppInfoFromShortcuts(WindissectOpaque const &, int, int, WindissectOpaque *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillFolderCache@CAppResolverCacheBuilder@@AEAAXPEAVCCacheInstance@@PEAUIShellFolder@@PEAU?$OFFSET@VCCacheDir@@@@PEAVCCacheRoot@@PEBUROOTSCANINFO@@PEBGH@Z
    void _FillFolderCache(CCacheInstance *, IShellFolder *, WindissectOpaque *, CCacheRoot *, ROOTSCANINFO const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMatchingAppGetAppID@CAppResolverCacheBuilder@@AEAAJPEBVCCacheInstance@@PEBVCCacheShortcut@@PEBG222PEAPEAG@Z
    long _FindMatchingAppGetAppID(CCacheInstance const *, CCacheShortcut const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPhoneticForJapanese@CAppResolverCacheBuilder@@AEAAJPEBGPEAPEAG@Z
    long _GetPhoneticForJapanese(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasCacheChanged@CAppResolverCacheBuilder@@AEAA_NPEBVCCacheInstance@@PEAUIMemoryMappedHeap@@@Z
    bool _HasCacheChanged(CCacheInstance const *, IMemoryMappedHeap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAppResolverCacheBuilder@@AEAAJPEAVCAppResolverCacheManager@@H@Z
    long _Initialize(CAppResolverCacheManager *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDarwinPathUpdated@CAppResolverCacheBuilder@@AEAA_NQEBXPEBVCCacheShortcut@@@Z
    bool _IsDarwinPathUpdated(void const * const, CCacheShortcut const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExcludedDirectory@CAppResolverCacheBuilder@@AEAA_NPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEBU_ITEMID_CHILD@@K@Z
    bool _IsExcludedDirectory(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *, _ITEMID_CHILD const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeIntoFolderCache@CAppResolverCacheBuilder@@AEAAXPEAVCCacheInstance@@PEAUIShellFolder@@PEAVCCacheRoot@@PEAU?$OFFSET@VCCacheDir@@@@W4ShortcutInfoRootType@@PEBGPEAV?$CDPA@U_ITEMID_CHILD@@V?$CTContainer_PolicyUnOwned@U_ITEMID_CHILD@@@@@@@Z
    void _MergeIntoFolderCache(CCacheInstance *, IShellFolder *, CCacheRoot *, WindissectOpaque *, int, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextFromCacheInDir@CAppResolverCacheBuilder@@AEAAPEBVCCacheShortcut@@PEAVCCacheInstance@@PEBVCCacheRoot@@PEBVCCacheDir@@@Z
    CCacheShortcut const * _NextFromCacheInDir(CCacheInstance *, CCacheRoot const *, CCacheDir const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyAppsFolderItemsChanged@CAppResolverCacheBuilder@@AEAAJXZ
    long _NotifyAppsFolderItemsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateCacheStructure@CAppResolverCacheBuilder@@AEAAJPEBVCCacheInstance@@PEAUAR_CACHE_HEADER@@@Z
    long _PopulateCacheStructure(CCacheInstance const *, AR_CACHE_HEADER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PublishAppResolverScannedEvent@CAppResolverCacheBuilder@@AEAAJXZ
    long _PublishAppResolverScannedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveAppInfosAndShortcuts@CAppResolverCacheBuilder@@AEAAJPEAUAR_CACHE_HEADER@@@Z
    long _SaveAppInfosAndShortcuts(AR_CACHE_HEADER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDerivedAttributes@CAppResolverCacheBuilder@@AEAAXPEAVCCacheShortcut@@QEBXPEBU_ITEMIDLIST_ABSOLUTE@@W4ShortcutInfoRootType@@@Z
    void _SetDerivedAttributes(CCacheShortcut *, void const * const, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransferShortcutToCache@CAppResolverCacheBuilder@@AEAAJPEAVCCacheInstance@@PEAU?$OFFSET@VCCacheDir@@@@W4ShortcutInfoRootType@@PEBVCCacheShortcut@@@Z
    long _TransferShortcutToCache(CCacheInstance *, WindissectOpaque *, int, CCacheShortcut const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRoot@CAppResolverCacheBuilder@@AEAAJPEAVCCacheInstance@@PEAUIShellFolder@@PEBUROOTSCANINFO@@H@Z
    long _UpdateRoot(CCacheInstance *, IShellFolder *, ROOTSCANINFO const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareShortcutByAppID@CAppResolverCacheBuilder@@CAHPEBU?$OFFSET@VCCacheShortcut@@@@0PEBX@Z
    static int s_CompareShortcutByAppID(WindissectOpaque const *, WindissectOpaque const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FolderEnumCallback@CAppResolverCacheBuilder@@CAHPEAU_ITEMID_CHILD@@PEAUENUMFOLDERINFO@1@@Z
    static int s_FolderEnumCallback(_ITEMID_CHILD *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IDListSortCallback@CAppResolverCacheBuilder@@CAHPEBU_ITEMID_CHILD@@0PEAUIShellFolder@@@Z
    static int s_IDListSortCallback(_ITEMID_CHILD const *, _ITEMID_CHILD const *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortByAppIDCallback@CAppResolverCacheBuilder@@CAHPEBU?$OFFSET@VCCacheShortcut@@@@0PEBX@Z
    static int s_SortByAppIDCallback(WindissectOpaque const *, WindissectOpaque const *, void const *);
};
