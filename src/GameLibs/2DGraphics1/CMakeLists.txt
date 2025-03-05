add_library(2DGraphics1
    src/Framework.cpp)
target_link_libraries(2DGraphics1
    PUBLIC
        GameLibsModules)
target_include_directories(2DGraphics1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
