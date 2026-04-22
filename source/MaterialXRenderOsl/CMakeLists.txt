file(GLOB_RECURSE materialx_source "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE materialx_headers "${CMAKE_CURRENT_SOURCE_DIR}/*.h*")

mx_add_library(MaterialXRenderOsl
    SOURCE_FILES
        ${materialx_source}
    HEADER_FILES
        ${materialx_headers}
    MTLX_MODULES
        MaterialXRender
    EXPORT_DEFINE
        MATERIALX_RENDEROSL_EXPORTS)

target_compile_definitions(${TARGET_NAME} PRIVATE
        MATERIALX_OSL_BINARY_OSLC=\"${MATERIALX_OSL_BINARY_OSLC}\"
        MATERIALX_OSL_BINARY_TESTRENDER=\"${MATERIALX_OSL_BINARY_TESTRENDER}\"
        MATERIALX_OSL_INCLUDE_PATH=\"${MATERIALX_OSL_INCLUDE_PATH}\"
)
