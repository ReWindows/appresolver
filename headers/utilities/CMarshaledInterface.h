#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
class CMarshaledInterface {
public:
    class CMarshalStream;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z
    long Marshal(_GUID const &, IUnknown *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMarshaledInterface@@QEAA@XZ
    ~CMarshaledInterface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z
    long _Unmarshal(_GUID const &, void * *, bool);
};
