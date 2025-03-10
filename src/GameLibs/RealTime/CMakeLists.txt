add_library(RealTime
    src/Framework.cpp)
target_link_libraries(RealTime
    PUBLIC
        GameLibsModules)
target_include_directories(RealTime
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
