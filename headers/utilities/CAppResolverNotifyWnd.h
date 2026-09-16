#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 12 member(s).
class CAppResolverNotifyWnd {
public:
    class RegisterArgs;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDelayedRefreshCache@CAppResolverNotifyWnd@@QEAAXW4START_MENU_REFRESH_CACHE_FLAGS@@@Z
    void CancelDelayedRefreshCache(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CAppResolverNotifyWnd@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppResolverNotifyWnd@@QEAAJPEAVCAppResolverCacheManager@@@Z
    long Initialize(CAppResolverCacheManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformRegistrationsOnMainThread@CAppResolverNotifyWnd@@QEAAXXZ
    void PerformRegistrationsOnMainThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDiskEventNotification@CAppResolverNotifyWnd@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@_NPEAI@Z
    long RegisterDiskEventNotification(_ITEMIDLIST_ABSOLUTE const *, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleDelayedRefreshCache@CAppResolverNotifyWnd@@QEAAJW4START_MENU_REFRESH_CACHE_FLAGS@@K@Z
    long ScheduleDelayedRefreshCache(int, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAssocChangeNotify@CAppResolverNotifyWnd@@AEAAJPEAXK@Z
    long _OnAssocChangeNotify(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDiskEventChangeNotify@CAppResolverNotifyWnd@@AEAAJPEAXKI@Z
    long _OnDiskEventChangeNotify(void *, unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterDiskEventNotification@CAppResolverNotifyWnd@@AEAAJPEAVRegisterArgs@1@@Z
    long _RegisterDiskEventNotification(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterDiskEventNotification@CAppResolverNotifyWnd@@AEAAJI@Z
    long _UnregisterDiskEventNotification(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CAppResolverNotifyWnd@@AEAA_JI_K_J@Z
    int64_t _WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CAppResolverNotifyWnd@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
