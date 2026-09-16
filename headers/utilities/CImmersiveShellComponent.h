#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 13 member(s).
class CImmersiveShellComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveShellComponent@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CImmersiveShellComponent@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z
    long RegisterServiceInformation(WindissectOpaque const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CImmersiveShellComponent@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveShellComponent@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveShellComponent@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveShellComponent@@UEAA@XZ
    virtual ~CImmersiveShellComponent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PublishServices@CImmersiveShellComponent@@MEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long v_PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_QueryService@CImmersiveShellComponent@@MEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long v_QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CImmersiveShellComponent@@MEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
};
