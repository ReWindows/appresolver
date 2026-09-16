#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 12 member(s).
class CAppResolverExclusionFilter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckExeExclusion@CAppResolverExclusionFilter@@UEAA?AW4ExeExclusionType@IAppResolverExclusionFilter@@PEBG_N@Z
    virtual int CheckExeExclusion(unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppIDBlockedFromTaskbarPinning@CAppResolverExclusionFilter@@UEAA_NPEBG@Z
    virtual bool IsAppIDBlockedFromTaskbarPinning(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedDirectory@CAppResolverExclusionFilter@@UEAA_NPEBG@Z
    virtual bool IsExcludedDirectory(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppResolverExclusionFilter@@UEAA@XZ
    virtual ~CAppResolverExclusionFilter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitExcludeAppIDList@CAppResolverExclusionFilter@@AEAAJXZ
    long _InitExcludeAppIDList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitExcludeExeList@CAppResolverExclusionFilter@@AEAAJXZ
    long _InitExcludeExeList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitExcludedDirectories@CAppResolverExclusionFilter@@AEAAJXZ
    long _InitExcludedDirectories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExcludedExe@CAppResolverExclusionFilter@@AEAA_NPEBG_N@Z
    bool _IsExcludedExe(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AppendString@CAppResolverExclusionFilter@@CAJPEAV?$CDPALocalMem@G@@PEBG@Z
    static long s_AppendString(WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InitStringList@CAppResolverExclusionFilter@@CAJPEAUHKEY__@@PEBGPEAV?$CDPALocalMem@G@@@Z
    static long s_InitStringList(HKEY__*, unsigned short const *, WindissectOpaque *);
};
