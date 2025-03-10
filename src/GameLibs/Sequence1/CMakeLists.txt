add_library(Sequence1
    src/GameLib/Framework.cpp)
target_link_libraries(Sequence1
    PUBLIC
        GameLibsModules)
target_include_directories(Sequence1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
