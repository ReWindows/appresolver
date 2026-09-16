#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 3 member(s).
namespace DataStoreCache {
class DataItemIdentifier {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemIdentifier@DataStoreCache@@QEAA@PEAUHSTRING__@@@Z
    DataItemIdentifier(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hash@DataItemIdentifier@DataStoreCache@@QEBA_KXZ
    uint64_t Hash() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataItemIdentifier@DataStoreCache@@QEAA@XZ
    ~DataItemIdentifier();
};
} // namespace DataStoreCache
