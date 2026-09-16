#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 6 member(s).
class DIBVEManifestParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@DIBVEManifestParser@@QEAAJPEBGPEAUIPropertyStore@@@Z
    long Parse(unsigned short const *, IPropertyStore *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DIBVEManifestParser@@QEAA@XZ
    ~DIBVEManifestParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSchemaCollection@DIBVEManifestParser@@AEAAJPEAPEAUIXMLDOMSchemaCollection@@@Z
    long _CreateSchemaCollection(IXMLDOMSchemaCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransformDocumentIfNecessary@DIBVEManifestParser@@AEAAJPEAUIXMLDOMDocument@@PEAPEAU2@@Z
    long _TransformDocumentIfNecessary(IXMLDOMDocument *, IXMLDOMDocument * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAllOrNothingAttributes@DIBVEManifestParser@@AEAAJPEAVCXMLDOMNode@@@Z
    long _ValidateAllOrNothingAttributes(CXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateDocument@DIBVEManifestParser@@AEAAJPEAUIXMLDOMDocument@@@Z
    long _ValidateDocument(IXMLDOMDocument *);
};
