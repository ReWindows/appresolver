#pragma once
#include "../windissect_forwards.h"

// Reconstructed from appresolver.dll by Windissect. 5 member(s).
class CLocalImageLoader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadLocalImage@CLocalImageLoader@@SAJPEBGUtagSIZE@@W4TILE_IMAGE_LOAD_OPTIONS@@PEAPEAUISharedBitmap@@@Z
    static long s_LoadLocalImage(unsigned short const *, tagSIZE, int, ISharedBitmap * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FileIsPreviewTileAsset@CLocalImageLoader@@CA_NPEBG@Z
    static bool s_FileIsPreviewTileAsset(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ValidateFileContents@CLocalImageLoader@@CAJPEBGUtagSIZE@@_NPEAU2@PEAU_GUID@@@Z
    static long s_ValidateFileContents(unsigned short const *, tagSIZE, bool, tagSIZE *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ValidateFileSize@CLocalImageLoader@@CAJPEBGPEAI@Z
    static long s_ValidateFileSize(unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ValidateFilename@CLocalImageLoader@@CAJPEBG@Z
    static long s_ValidateFilename(unsigned short const *);
};
