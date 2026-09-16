#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 46 member(s).
class CAppsFolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CAppsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CAppsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppsFolder@@QEAA@XZ
    CAppsFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CAppsFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMergedPropertyStore@CAppsFolder@@QEAAJPEFBU_ITEMID_CHILD@@W4APPS_PROPSTORE_TYPE@@AEBU_GUID@@PEAPEAX@Z
    long CreateMergedPropertyStore(_ITEMID_CHILD & volatile *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CAppsFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CAppsFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CAppsFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CAppsFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CAppsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CAppsFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CAppsFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CAppsFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSearchGUID@CAppsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CAppsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CAppsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CAppsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpansionProperties@CAppsFolder@@UEAAJPEAPEAUIPropertyKeyStore@@@Z
    virtual long GetExpansionProperties(IPropertyKeyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@CAppsFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeAndSubQueries@CAppsFolder@@UEAAJW4SCOPE_ITEM_DEPTH@@W4SCOPE_ITEM_FLAGS@@PEAPEAUIScope@@PEAPEAUIShellItemArray@@@Z
    virtual long GetScopeAndSubQueries(int, int, IScope * *, IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchRoot@CAppsFolder@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetSearchRoot(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartMenuAppItemsEnumerator@CAppsFolder@@QEAAJPEAPEAUIEnumObjects@@@Z
    long GetStartMenuAppItemsEnumerator(IEnumObjects * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailHandler@CAppsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetThumbnailHandler(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CAppsFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CAppsFolder@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CAppsFolder@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CAppsFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CAppsFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackReferences@CAppsFolder@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CAppsFolder@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CAppsFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWrapperFolderWeakReference@CAppsFolder@@UEAAJPEAUIShellFolder2@@@Z
    virtual long SetWrapperFolderWeakReference(IShellFolder2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CAppsFolder@@UEAAJPEAUIBindCtx@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z
    virtual long Update(IBindCtx *, _ITEMID_CHILD & volatile *, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateChildItemID@CAppsFolder@@AEAAJPEBGW4APPITEM_MODE@@PEAPEAU_ITEMID_CHILD@@@Z
    long _CreateChildItemID(unsigned short const *, int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePropertyStoreForThumbnailCacheId@CAppsFolder@@CAJPEAUIPropertyStore@@PEAPEAU2@@Z
    static long _CreatePropertyStoreForThumbnailCacheId(IPropertyStore *, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSimpleItemID@CAppsFolder@@AEAAJPEBG0PEAPEAU_ITEMID_CHILD@@@Z
    long _CreateSimpleItemID(unsigned short const *, unsigned short const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAppResolver@CAppsFolder@@AEAAJXZ
    long _EnsureAppResolver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemMode@CAppsFolder@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAW4APPITEM_MODE@@@Z
    long _GetItemMode(_ITEMIDLIST_RELATIVE & volatile *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertiesFromAppResolver@CAppsFolder@@AEAAJPEBGPEAPEAUIPropertyStore@@@Z
    long _GetPropertiesFromAppResolver(unsigned short const *, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailAndIconExtractor@CAppsFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    long _GetThumbnailAndIconExtractor(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppsFolder@@EEAA@XZ
    virtual ~CAppsFolder();
};
