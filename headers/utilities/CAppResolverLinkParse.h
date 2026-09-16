#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 13 member(s).
class CAppResolverLinkParse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodePath@CAppResolverLinkParse@@SAJPEBGPEAPEAG@Z
    static long EncodePath(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandPath@CAppResolverLinkParse@@SAJPEBGPEAPEAG@Z
    static long ExpandPath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPathFromLink@CAppResolverLinkParse@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAPEAG2PEAK@Z
    static long GetAppPathFromLink(IShellLinkW *, IShellItem *, unsigned long, unsigned short * *, unsigned short * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstallPathFromDarwinID@CAppResolverLinkParse@@SAJPEBGPEAPEAG@Z
    static long GetInstallPathFromDarwinID(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitShortcutDataFromLink@CAppResolverLinkParse@@QEAAJPEAUIShellLinkW@@PEAUIShellItem@@@Z
    long InitShortcutDataFromLink(IShellLinkW *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitTargetInfoFromLink@CAppResolverLinkParse@@QEAAJPEAUIShellLinkW@@PEAUIShellItem@@_N@Z
    long InitTargetInfoFromLink(IShellLinkW *, IShellItem *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppResolverLinkParse@@QEAA@XZ
    ~CAppResolverLinkParse();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDarwinID@CAppResolverLinkParse@@CAJPEAUIShellLinkW@@PEAPEAG@Z
    static long _GetDarwinID(IShellLinkW *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStringProperty@CAppResolverLinkParse@@CAJPEAUIPropertyStore@@AEBU_tagpropertykey@@PEAPEAG@Z
    static long _GetStringProperty(IPropertyStore *, _tagpropertykey const &, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetPath@CAppResolverLinkParse@@CAJPEAUIShellLinkW@@KPEAPEAGPEAK@Z
    static long _GetTargetPath(IShellLinkW *, unsigned long, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailCacheID@CAppResolverLinkParse@@CAJPEAUIShellItem@@PEA_K@Z
    static long _GetThumbnailCacheID(IShellItem *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisualElementProperties@CAppResolverLinkParse@@CAJPEBG00PEA_NPEAPEAUIPropertyStore@@@Z
    static long _GetVisualElementProperties(unsigned short const *, unsigned short const *, unsigned short const *, bool *, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDesktopTileColorFromShellItem@CAppResolverLinkParse@@AEAAJPEAUIShellItem@@@Z
    long _InitDesktopTileColorFromShellItem(IShellItem *);
};
