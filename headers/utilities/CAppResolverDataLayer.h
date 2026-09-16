#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 10 member(s).
class CAppResolverDataLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherShortcutForAppID@CAppResolverDataLayer@@UEAAJPEBGPEAPEAUIShortcutInfo@@@Z
    virtual long FindLauncherShortcutForAppID(unsigned short const *, IShortcutInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingShortcut@CAppResolverDataLayer@@UEAAJPEBG000W4FIND_MATCHING_SHORTCUT_OPTIONS@@@Z
    virtual long FindMatchingShortcut(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInfoEnumerator@CAppResolverDataLayer@@UEAAJPEAPEAUIAppInfoEnumerator@@@Z
    virtual long GetAppInfoEnumerator(IAppInfoEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInforForAppID@CAppResolverDataLayer@@UEAAJPEBGPEAPEAUIAppInfo@@@Z
    virtual long GetAppInforForAppID(unsigned short const *, IAppInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheInstanceRevision@CAppResolverDataLayer@@UEAAJPEA_J@Z
    virtual long GetCacheInstanceRevision(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutForAppPath@CAppResolverDataLayer@@UEAAJPEBGPEAPEAUIShortcutInfo@@@Z
    virtual long GetShortcutForAppPath(unsigned short const *, IShortcutInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShortcutInfoEnumerator@CAppResolverDataLayer@@UEAAJW4ShortcutInfoRootType@@PEAPEAUIShortcutInfoEnumerator@@@Z
    virtual long GetShortcutInfoEnumerator(int, IShortcutInfoEnumerator * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppResolverDataLayer@@UEAA@XZ
    virtual ~CAppResolverDataLayer();
};
