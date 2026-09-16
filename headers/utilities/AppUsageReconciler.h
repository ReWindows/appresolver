#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 46 member(s).
class AppUsageReconciler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUsageReconciler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllRanksHaveChanged@AppUsageReconciler@@UEAAJXZ
    virtual long AllRanksHaveChanged();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUsageReconciler@@QEAA@XZ
    AppUsageReconciler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGranularUsageData@AppUsageReconciler@@UEAAJPEBGPEAU_FILETIME@@PEAI2PEAK@Z
    virtual long GetGranularUsageData(unsigned short const *, _FILETIME *, unsigned int *, unsigned int *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUsageReconciler@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRankForApp@AppUsageReconciler@@UEAAJPEBGPEAI@Z
    virtual long GetRankForApp(unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUsageReconciler@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUsageReconciler@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JumplistChangedForApp@AppUsageReconciler@@UEAAJPEBG@Z
    virtual long JumplistChangedForApp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteAppsToTopOfFrequentList@AppUsageReconciler@@UEAAJPEAPEBGI@Z
    virtual long PromoteAppsToTopOfFrequentList(unsigned short const * *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUsageReconciler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RankChangedForApp@AppUsageReconciler@@UEAAJPEBG_N@Z
    virtual long RankChangedForApp(unsigned short const *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUsageReconciler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGranularUsageData@AppUsageReconciler@@UEAAJPEBGIIK@Z
    virtual long SetGranularUsageData(unsigned short const *, unsigned int, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppUsageForTrackedApps@AppUsageReconciler@@UEAAJXZ
    virtual long UpdateAppUsageForTrackedApps();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearUsageForTrackedApps@AppUsageReconciler@@AEAAJXZ
    long ClearUsageForTrackedApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIdentifierFactories@AppUsageReconciler@@AEAAJXZ
    long EnsureIdentifierFactories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePrimaryTileViewStatics@AppUsageReconciler@@AEAAJXZ
    long EnsurePrimaryTileViewStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTileProperties@AppUsageReconciler@@AEAAJXZ
    long EnsureTileProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMostUsedApp@AppUsageReconciler@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetMostUsedApp(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAssistInfo@AppUsageReconciler@@CAXPEBGKAEAUtagUEMINFO@@@Z
    static void GetUserAssistInfo(unsigned short const *, unsigned long, tagUEMINFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexUnifiedTileIdByAumid@AppUsageReconciler@@AEAAXPEAUHSTRING__@@PEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    void IndexUnifiedTileIdByAumid(HSTRING__*, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileUsageForAllApps@AppUsageReconciler@@AEAAJXZ
    long ReconcileUsageForAllApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileUsageForApp@AppUsageReconciler@@AEAAJPEAUHSTRING__@@_N@Z
    long ReconcileUsageForApp(HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileUsageForTrackedApps@AppUsageReconciler@@AEAAJXZ
    long ReconcileUsageForTrackedApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconcileUserAssistData@AppUsageReconciler@@CAJPEAUHSTRING__@@_NPEAUICDSLocalVolatileTileProperties@CDSProperties@Shell@WindowsInternal@@@Z
    static long ReconcileUserAssistData(HSTRING__*, bool, ::WindowsInternal::Shell::CDSProperties::ICDSLocalVolatileTileProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIndexedUnifiedTileId@AppUsageReconciler@@AEAA?AV?$ComPtr@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    WindissectOpaque TryGetIndexedUnifiedTileId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetUnifiedTileIdForInstalledApp@AppUsageReconciler@@AEAAJPEAUHSTRING__@@PEAPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@@Z
    long TryGetUnifiedTileIdForInstalledApp(HSTRING__*, ::WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUsageReconciler@@EEAA@XZ
    virtual ~AppUsageReconciler();
};
