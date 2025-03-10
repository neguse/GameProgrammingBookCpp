add_library(InputDevices
    src/GameLib/Framework.cpp)
target_link_libraries(InputDevices
    PUBLIC
        GameLibsModules)
target_include_directories(InputDevices
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src)
