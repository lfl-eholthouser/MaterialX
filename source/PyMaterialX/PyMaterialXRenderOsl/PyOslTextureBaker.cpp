//
// Copyright Contributors to the MaterialX Project
// SPDX-License-Identifier: Apache-2.0
//

#include <PyMaterialX/PyMaterialX.h>

#include <MaterialXRenderOsl/TextureBaker.h>
#include <MaterialXCore/Material.h>

namespace py = pybind11;
namespace mx = MaterialX;

void bindPyTextureBakerOsl(py::module& mod)
{
    py::class_<mx::TextureBakerOsl, mx::OslRenderer, mx::TextureBakerPtr>(mod, "OSLTextureBaker")
      .def_static("create", &mx::TextureBakerOsl::create)
      .def("setExtension", &mx::TextureBakerOsl::setExtension)
      .def("getExtension", &mx::TextureBakerOsl::getExtension)
      .def("setColorSpace", &mx::TextureBakerOsl::setColorSpace)
      .def("getColorSpace", &mx::TextureBakerOsl::getColorSpace)
      .def("setDistanceUnit", &mx::TextureBakerOsl::setDistanceUnit)
      .def("getDistanceUnit", &mx::TextureBakerOsl::getDistanceUnit)
      .def("setAverageImages", &mx::TextureBakerOsl::setAverageImages)
      .def("getAverageImages", &mx::TextureBakerOsl::getAverageImages)
      .def("setOptimizeConstants", &mx::TextureBakerOsl::setOptimizeConstants)
      .def("getOptimizeConstants", &mx::TextureBakerOsl::getOptimizeConstants)
      .def("setOutputImagePath", &mx::TextureBakerOsl::setOutputImagePath)
      .def("getOutputImagePath", &mx::TextureBakerOsl::getOutputImagePath)
      .def("setBakedGraphName", &mx::TextureBakerOsl::setBakedGraphName)
      .def("getBakedGraphName", &mx::TextureBakerOsl::getBakedGraphName)
      .def("setBakedGeomInfoName", &mx::TextureBakerOsl::setBakedGeomInfoName)
      .def("getBakedGeomInfoName", &mx::TextureBakerOsl::getBakedGeomInfoName)
      .def("setTextureFilenameTemplate", &mx::TextureBakerOsl::setTextureFilenameTemplate)
      .def("getTextureFilenameTemplate", &mx::TextureBakerOsl::getTextureFilenameTemplate)
      .def("setFilenameTemplateVarOverride", &mx::TextureBakerOsl::setFilenameTemplateVarOverride)
      .def("setHashImageNames", &mx::TextureBakerOsl::setHashImageNames)
      .def("getHashImageNames", &mx::TextureBakerOsl::getHashImageNames)
      .def("setTextureSpaceMin", &mx::TextureBakerOsl::setTextureSpaceMin)
      .def("getTextureSpaceMin", &mx::TextureBakerOsl::getTextureSpaceMin)
      .def("setTextureSpaceMax", &mx::TextureBakerOsl::setTextureSpaceMax)
      .def("getTextureSpaceMax", &mx::TextureBakerOsl::getTextureSpaceMax)
      .def("setupUnitSystem", &mx::TextureBakerOsl::setupUnitSystem)
      .def("bakeMaterialToDoc", &mx::TextureBakerOsl::bakeMaterialToDoc)
      .def("bakeAllMaterials", &mx::TextureBakerOsl::bakeAllMaterials)
      .def("writeDocumentPerMaterial", &mx::TextureBakerOsl::writeDocumentPerMaterial);
     
}
