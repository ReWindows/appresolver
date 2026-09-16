#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
namespace ATL {
class CComBSTR {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CComBSTR@ATL@@QEAAJPEBG@Z
    long Append(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CComBSTR@ATL@@QEAAJPEBGH@Z
    long Append(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@CComBSTR@ATL@@QEAAXPEAG@Z
    void Attach(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComBSTR@ATL@@QEAA@PEBG@Z
    CComBSTR(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComBSTR@ATL@@QEAA@XZ
    ~CComBSTR();
};
} // namespace ATL
