#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 74 member(s).
class CAppResolver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateDesktopTile@CAppResolver@@UEAAJPEBGPEAUIUnknown@@@Z
    virtual long ActivateDesktopTile(unsigned short const *, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppResolver@@QEAA@XZ
    CAppResolver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinApp@CAppResolver@@UEAAJPEAUIShellItem@@@Z
    virtual long CanPinApp(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinAppShortcut@CAppResolver@@UEAAJPEAUIShellLinkW@@PEAUIShellItem@@@Z
    virtual long CanPinAppShortcut(IShellLinkW *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAppUsageData@CAppResolver@@UEAAJXZ
    virtual long EnableAppUsageData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCachedItems@CAppResolver@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumCachedItems(_ITEMIDLIST_ABSOLUTE const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumItems@CAppResolver@@UEAAJW4START_MENU_APP_ITEMS_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumItems(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateShortcutFromItemProperties@CAppResolver@@UEAAJPEAUIShellItem2@@PEAPEAUIShellItem@@@Z
    virtual long GenerateShortcutFromItemProperties(IShellItem2*, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateShortcutFromWindowProperties@CAppResolver@@UEAAJPEAUHWND__@@PEAPEAUIShellItem@@@Z
    virtual long GenerateShortcutFromWindowProperties(HWND__*, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIDForProcess@CAppResolver@@UEAAJKPEAPEAGPEAH11@Z
    virtual long GetAppIDForProcess(unsigned long, unsigned short * *, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIDForShortcut@CAppResolver@@UEAAJPEAUIShellItem@@PEAPEAG@Z
    virtual long GetAppIDForShortcut(IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIDForShortcutObject@CAppResolver@@UEAAJPEAUIShellLinkW@@PEAUIShellItem@@PEAPEAG@Z
    virtual long GetAppIDForShortcutObject(IShellLinkW *, IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIDForWindow@CAppResolver@@UEAAJPEAUHWND__@@PEAPEAGPEAH22@Z
    virtual long GetAppIDForWindow(HWND__*, unsigned short * *, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestShortcutAndAppIDForAppPath@CAppResolver@@UEAAJPEBGPEAPEAUIShellItem@@PEAPEAG@Z
    virtual long GetBestShortcutAndAppIDForAppPath(unsigned short const *, IShellItem * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestShortcutForAppID@CAppResolver@@UEAAJPEBGPEAPEAUIShellItem@@@Z
    virtual long GetBestShortcutForAppID(unsigned short const *, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataLayerManager@CAppResolver@@UEAAJPEAPEAUIAppResolverDataLayerManager@@@Z
    virtual long GetDataLayerManager(IAppResolverDataLayerManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullListOfAppIDs@CAppResolver@@UEAAJPEAIPEAPEAPEAG@Z
    virtual long GetFullListOfAppIDs(unsigned int *, unsigned short * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CAppResolver@@UEAAJW4START_MENU_APP_ITEMS_FLAGS@@PEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(int, unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByAppPath@CAppResolver@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetItemByAppPath(unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherAppIDForItem@CAppResolver@@UEAAJPEAUIShellItem@@PEAPEAG@Z
    virtual long GetLauncherAppIDForItem(IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherAppIDForItemEx@CAppResolver@@UEAAJPEAUIShellItem@@W4tagAPP_RESOLVER_ITEM_FILTER_FLAGS@@PEAPEAG@Z
    virtual long GetLauncherAppIDForItemEx(IShellItem *, int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelaunchProperties@CAppResolver@@UEAAJPEAUHWND__@@PEAPEAG111PEAH@Z
    virtual long GetRelaunchProperties(HWND__*, unsigned short * *, unsigned short * *, unsigned short * *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutForAppID@CAppResolver@@UEAAJPEBGPEAPEAUIShellItem@@@Z
    virtual long GetShortcutForAppID(unsigned short const *, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutForProcess@CAppResolver@@UEAAJKPEAPEAUIShellItem@@@Z
    virtual long GetShortcutForProcess(unsigned long, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCacheMatchingLanguage@CAppResolver@@UEAAJPEAH@Z
    virtual long IsCacheMatchingLanguage(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChangeNotify@CAppResolver@@UEAAJIJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChangeNotify(unsigned int, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseNotifications@CAppResolver@@UEAAJXZ
    virtual long PauseNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteAppsToTopOfFrequentList@CAppResolver@@UEAAJPEAPEBGI@Z
    virtual long PromoteAppsToTopOfFrequentList(unsigned short const * *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCache@CAppResolver@@UEAAJW4START_MENU_REFRESH_CACHE_FLAGS@@@Z
    virtual long RefreshCache(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterARNotify@CAppResolver@@UEAAJPEAUIAppResolverNotify@@@Z
    virtual long RegisterARNotify(IAppResolverNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForNotifications@CAppResolver@@UEAAJXZ
    virtual long RegisterForNotifications();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppResolver@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGlobalCacheObject@CAppResolver@@UEAAJXZ
    virtual long ReleaseGlobalCacheObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeNotifications@CAppResolver@@UEAAJXZ
    virtual long ResumeNotifications();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinToStartOnDiscovery@CAppResolver@@UEAAJPEBG0@Z
    virtual long SetPinToStartOnDiscovery(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForNotifications@CAppResolver@@UEAAJXZ
    virtual long UnregisterForNotifications();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutPathOrAppIdFromPid@CAppResolver@@AEBAJKPEAPEAGPEAH1@Z
    long GetShortcutPathOrAppIdFromPid(unsigned long, unsigned short * *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanPinAppImpl@CAppResolver@@AEAAJPEAUIShellItem@@PEAUIShellLinkW@@@Z
    long _CanPinAppImpl(IShellItem *, IShellLinkW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanPinAppPath@CAppResolver@@AEAAJPEBG_N@Z
    long _CanPinAppPath(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAppResolverCacheObject@CAppResolver@@AEAAJHPEAPEAVCAppResolverCacheManager@@@Z
    long _CreateAppResolverCacheObject(int, CAppResolverCacheManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePropStoreForLauncherItem@CAppResolver@@AEAAJPEAUIAppResolverDataLayer@@PEAUIShortcutInfo@@AEBU_GUID@@PEAPEAX@Z
    long _CreatePropStoreForLauncherItem(IAppResolverDataLayer *, IShortcutInfo *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateShortcutFromProperties@CAppResolver@@AEAAJPEBG000PEAPEAUIShellItem@@@Z
    long _CreateShortcutFromProperties(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppIDForShortcutImpl@CAppResolver@@AEAAJPEAUIShellLinkW@@PEAUIShellItem@@PEAPEAG@Z
    long _GetAppIDForShortcutImpl(IShellLinkW *, IShellItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppResolverCacheObject@CAppResolver@@AEAAJXZ
    long _GetAppResolverCacheObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBestAppIDForProcess@CAppResolver@@AEAAJKPEBGPEAPEAG@Z
    long _GetBestAppIDForProcess(unsigned long, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemByAppPath@CAppResolver@@AEAAJPEBG_NAEBU_GUID@@PEAPEAX@Z
    long _GetItemByAppPath(unsigned short const *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRelaunchPropertiesFromPropertyStore@CAppResolver@@AEAAJPEAUIPropertyStore@@PEAPEAG111PEAH@Z
    long _GetRelaunchPropertiesFromPropertyStore(IPropertyStore *, unsigned short * *, unsigned short * *, unsigned short * *, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldCreateShortcutFromRelaunchProperties@CAppResolver@@AEAAJPEBG000H@Z
    long _ShouldCreateShortcutFromRelaunchProperties(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteShortcut@CAppResolver@@AEAAJPEBG0000PEAPEAUIShellItem@@@Z
    long _WriteShortcut(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortShortcutsForBestShortcut@CAppResolver@@CAHPEBVCCacheShortcut@@0PEAVCCacheInstance@@@Z
    static int s_SortShortcutsForBestShortcut(CCacheShortcut const *, CCacheShortcut const *, CCacheInstance *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppResolver@@AEAA@XZ
    ~CAppResolver();
};
