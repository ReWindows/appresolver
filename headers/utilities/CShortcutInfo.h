#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 32 member(s).
class CShortcutInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShortcutInfo@@QEAA@XZ
    CShortcutInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFullIDList@CShortcutInfo@@UEAAPEAU_ITEMIDLIST_ABSOLUTE@@XZ
    virtual _ITEMIDLIST_ABSOLUTE * CreateFullIDList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetAppID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPath@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetAppPath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPathEncoded@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetAppPathEncoded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArguments@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetArguments();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayInfo@CShortcutInfo@@UEAAJPEAPEAUIDisplayInfo@@@Z
    virtual long GetDisplayInfo(IDisplayInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetDisplayName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManifestHintPath@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetManifestHintPath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinMigrationAppIds@CShortcutInfo@@UEAAJPEAPEAPEBGPEAK@Z
    virtual long GetPinMigrationAppIds(unsigned short const * * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinMigrationExecutables@CShortcutInfo@@UEAAJPEAPEAPEBGPEAK@Z
    virtual long GetPinMigrationExecutables(unsigned short const * * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinMigrationPackagedAppId@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetPinMigrationPackagedAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictionIndex@CShortcutInfo@@UEAAIXZ
    virtual unsigned int GetRestrictionIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsCommand@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetSettingsCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortName@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetSortName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuiteName@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetSuiteName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuiteSortName@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetSuiteSortName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailCacheID@CShortcutInfo@@UEAA_KXZ
    virtual uint64_t GetThumbnailCacheID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToastActivatorCLSID@CShortcutInfo@@UEAA?AU_GUID@@XZ
    virtual _GUID GetToastActivatorCLSID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUninstallCommand@CShortcutInfo@@UEAAPEBGXZ
    virtual unsigned short const * GetUninstallCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEligibleForRecentlyAddedList@CShortcutInfo@@UEAA_NXZ
    virtual bool IsEligibleForRecentlyAddedList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExcludedFromAppEnumeration@CShortcutInfo@@UEAA_NXZ
    virtual bool IsExcludedFromAppEnumeration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFolder@CShortcutInfo@@UEAA_NXZ
    virtual bool IsFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInLauncher@CShortcutInfo@@UEAA_NXZ
    virtual bool IsInLauncher();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnable@CShortcutInfo@@UEAA_NXZ
    virtual bool IsPinnable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemComponent@CShortcutInfo@@UEAA_NXZ
    virtual bool IsSystemComponent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUserPinned@CShortcutInfo@@UEAA_NXZ
    virtual bool IsUserPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyStore@CShortcutInfo@@UEAAJPEAUIPropertyStore@@@Z
    virtual long PopulatePropertyStore(IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreventPinning@CShortcutInfo@@UEAA_NXZ
    virtual bool PreventPinning();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShortcutInfo@@UEAA@XZ
    virtual ~CShortcutInfo();
};
