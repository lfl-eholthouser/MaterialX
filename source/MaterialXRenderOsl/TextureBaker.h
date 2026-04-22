//
// Copyright Contributors to the MaterialX Project
// SPDX-License-Identifier: Apache-2.0
//

#ifndef MATERIALX_TEXTUREBAKER_OSL
#define MATERIALX_TEXTUREBAKER_OSL

/// @file
/// Texture baking functionality

#include <iostream>

#include <MaterialXCore/Unit.h>
#include <MaterialXRender/TextureBaker.h>

#include <MaterialXRenderOsl/Export.h>

#include <MaterialXRenderOsl/OslRenderer.h>
#include <MaterialXGenOsl/OslShaderGenerator.h>

MATERIALX_NAMESPACE_BEGIN

/// A shared pointer to a TextureBaker
using TextureBakerPtr = shared_ptr<class TextureBakerOsl>;

/// A vector of baked documents with their associated names.
using BakedDocumentVec = std::vector<std::pair<std::string, DocumentPtr>>;

/// @class TextureBakerOSl
/// An implementation of TextureBaker based on OSL shader generation.
class MX_RENDEROSL_API TextureBakerOsl : public TextureBaker<OslRenderer, OslShaderGenerator>
{
  public:
    static TextureBakerPtr create(unsigned int width = 1024, unsigned int height = 1024, Image::BaseType baseType = Image::BaseType::UINT8)
    {
        return TextureBakerPtr(new TextureBakerOsl(width, height, baseType));
    }

    TextureBakerOsl(unsigned int width, unsigned int height, Image::BaseType baseType);
};

MATERIALX_NAMESPACE_END

#endif
