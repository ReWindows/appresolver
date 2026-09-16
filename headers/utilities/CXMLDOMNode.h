#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 10 member(s).
class CXMLDOMNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromFile@CXMLDOMNode@@QEAAJPEBGAEBU_GUID@@@Z
    long CreateFromFile(unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromResource@CXMLDOMNode@@QEAAJPEAUHINSTANCE__@@PEBG1AEBU_GUID@@@Z
    long CreateFromResource(HINSTANCE__*, unsigned short const *, unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromStream@CXMLDOMNode@@QEAAJPEAUIStream@@AEBU_GUID@@@Z
    long CreateFromStream(IStream *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getStringAttribute@CXMLDOMNode@@QEAAJPEBGPEAPEAG@Z
    long getStringAttribute(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?innerText@CXMLDOMNode@@QEAAPEAGXZ
    unsigned short * innerText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ownerDocument@CXMLDOMNode@@QEAAPEAUIXMLDOMDocument@@XZ
    IXMLDOMDocument * ownerDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?selectNode@CXMLDOMNode@@QEAA?AV1@PEBGH@Z
    CXMLDOMNode selectNode(unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXMLDOMNode@@QEAA@XZ
    ~CXMLDOMNode();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CXMLDOMNode@@IEAAHXZ
    int GetElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CXMLDOMNode@@IEAAXXZ
    void Reset();
};
