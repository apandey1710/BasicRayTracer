add_library(imaging color.cpp ray.cpp hittable.cpp)

target_link_libraries(imaging PUBLIC vmath)

target_include_directories(imaging PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})