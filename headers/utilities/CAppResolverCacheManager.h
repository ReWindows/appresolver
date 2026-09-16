#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 30 member(s).
class CAppResolverCacheManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppResolverCacheManager@@QEAA@XZ
    CAppResolverCacheManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPinUserPinnedItem@CAppResolverCacheManager@@UEAAJPEBG0@Z
    virtual long CanPinUserPinnedItem(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAppUsageData@CAppResolverCacheManager@@QEAAJXZ
    long EnableAppUsageData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppIDWorker@CAppResolverCacheManager@@SAJPEBG00PEAPEAG@Z
    static long GenerateAppIDWorker(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUsageReconciler@CAppResolverCacheManager@@QEAAJPEAPEAUIAppUsageReconciler@@@Z
    long GetAppUsageReconciler(IAppUsageReconciler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheInstance@CAppResolverCacheManager@@QEAAPEAVCCacheInstance@@XZ
    CCacheInstance * GetCacheInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataLayerInstance@CAppResolverCacheManager@@UEAAJPEAPEAUIAppResolverDataLayer@@@Z
    virtual long GetDataLayerInstance(IAppResolverDataLayer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumFilter@CAppResolverCacheManager@@UEAAJPEAPEAUIAppResolverEnumFilter@@@Z
    virtual long GetEnumFilter(IAppResolverEnumFilter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewCache@CAppResolverCacheManager@@QEAAJAEBU_GUID@@PEAPEAUIMemoryMappedCache@@PEAPEAUIMemoryMappedHeap@@@Z
    long GetNewCache(_GUID const &, IMemoryMappedCache * *, IMemoryMappedHeap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootRefreshState@CAppResolverCacheManager@@QEAA?AW4ROOT_REFRESH_STATE@@H@Z
    int GetRootRefreshState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppResolverCacheManager@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChangeNotify@CAppResolverCacheManager@@QEAAXIJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    void OnChangeNotify(unsigned int, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnJumpListChangeNotify@CAppResolverCacheManager@@QEAAXPEBG@Z
    void OnJumpListChangeNotify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteAppsToTopOfFrequentList@CAppResolverCacheManager@@QEAAJPEAPEBGI@Z
    long PromoteAppsToTopOfFrequentList(unsigned short const * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCache@CAppResolverCacheManager@@QEAAJW4START_MENU_REFRESH_CACHE_FLAGS@@@Z
    long RefreshCache(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForNotifications@CAppResolverCacheManager@@QEAAJXZ
    long RegisterForNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterShortcutHotKeys@CAppResolverCacheManager@@QEAAXXZ
    void RegisterShortcutHotKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinToStartOnDiscovery@CAppResolverCacheManager@@QEAAJPEBG0@Z
    long SetPinToStartOnDiscovery(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForNotifications@CAppResolverCacheManager@@QEAAJXZ
    long UnregisterForNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCache@CAppResolverCacheManager@@QEAAJW4START_MENU_REFRESH_CACHE_FLAGS@@@Z
    long UpdateCache(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppResolverCacheManager@@UEAA@XZ
    virtual ~CAppResolverCacheManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAppUsageObjects@CAppResolverCacheManager@@AEAAJXZ
    long InitializeAppUsageObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRegisteredForDiskNotifications@CAppResolverCacheManager@@AEAAJXZ
    long _EnsureRegisteredForDiskNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GeneratePinToStartOnDiscoveryKey@CAppResolverCacheManager@@AEAAJPEBG0PEAPEAG@Z
    long _GeneratePinToStartOnDiscoveryKey(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeMemoryMappedCache@CAppResolverCacheManager@@AEAAJXZ
    long _InitializeMemoryMappedCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PauseResumeDiskNotifications@CAppResolverCacheManager@@AEAAJ_N@Z
    long _PauseResumeDiskNotifications(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterNotifyAll@CAppResolverCacheManager@@AEAAXXZ
    void _UnregisterNotifyAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_UANotifyCB@CAppResolverCacheManager@@CAHPEAXPEBU_GUID@@PEBGW4tagUAEVENT@@@Z
    static int _s_UANotifyCB(void *, _GUID const *, unsigned short const *, int);
};
