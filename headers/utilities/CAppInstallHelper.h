#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 10 member(s).
class CAppInstallHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBegin@CAppInstallHelper@@UEAAJPEAUIAppReadinessTask@@@Z
    virtual long OnBegin(IAppReadinessTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComplete@CAppInstallHelper@@UEAAJPEAUIAppReadinessTask@@J@Z
    virtual long OnComplete(IAppReadinessTask *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgress@CAppInstallHelper@@UEAAJPEAUIAppReadinessTask@@@Z
    virtual long OnProgress(IAppReadinessTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CAppInstallHelper@@QEAAJPEBG00_N@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppInstallHelper@@UEAA@XZ
    virtual ~CAppInstallHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Begin@CAppInstallHelper@@AEAAJW4InstallStage@1@J@Z
    long _Begin(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowError@CAppInstallHelper@@AEAAJJ@Z
    long _ShowError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryInstallApp@CAppInstallHelper@@AEAAJW4APPREADINESS_TASK_FLAGS@@@Z
    long _TryInstallApp(int);
};
