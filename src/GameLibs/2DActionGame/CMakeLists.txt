add_library(2DActionGame
    src/GameLib/Framework.cpp)
target_link_libraries(2DActionGame
    PUBLIC
        GameLibsModules)
target_include_directories(2DActionGame
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
