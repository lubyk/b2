# --------------------------------------------------------------
#  b2
#
#  provides:
#    b2.lua
#    b2/vendor.so
# --------------------------------------------------------------
set(MODULE_NAME b2)

# --------------------------------------------------------------
#  module
# --------------------------------------------------------------
add_custom_target(${MODULE_NAME} true)

# --------------------------------------------------------------
#  rebuild Lua bindings
# --------------------------------------------------------------
add_custom_target("${MODULE_NAME}_bind"
  COMMAND cd ${CMAKE_CURRENT_SOURCE_DIR} && lua bind/bind.lua
)

# --------------------------------------------------------------
#  Box2D
# --------------------------------------------------------------
set(BOX2D_BUILD_STATIC ON)
set(BOX2D_BUILD_EXAMPLES OFF)
set(BOX2D_INSTALL OFF)
set(VENDOR_LIB "Box2D")
add_subdirectory(vendor/Box2D)

# --------------------------------------------------------------
#  b2_vendor                                        b2/vendor.so
# --------------------------------------------------------------
set(target "${MODULE_NAME}_vendor")

file(GLOB MODULE_SOURCES src/*.cpp src/bind/*.cpp src/bind/dub/*.cpp)
include_directories(include)
include_directories(src/bind)
include_directories(vendor/Box2D)

add_library(${target} MODULE ${MODULE_SOURCES})
set_target_properties(${target}
  PROPERTIES OUTPUT_NAME vendor
  LINK_FLAGS ${PLAT_OBJ_FLAGS}
  PREFIX ""
  SUFFIX ".so"
)  
target_link_libraries(${target} ${VENDOR_LIB})
add_dependencies(${MODULE_NAME} ${target})

# --------------------------------------------------------------
#  install b2/vendor.so
# --------------------------------------------------------------
install(TARGETS ${target}
  DESTINATION ${LUBYK_LIB}/lib/${MODULE_NAME}
)

# --------------------------------------------------------------
#  install b2.lua
# --------------------------------------------------------------
install(DIRECTORY lib
  DESTINATION ${LUBYK_LIB}
)

