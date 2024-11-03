add_library(primitives sphere.cpp)

target_link_libraries(primitives PUBLIC imaging)
target_link_libraries(primitives PUBLIC vmath)

target_include_directories(primitives PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})