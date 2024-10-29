cmake_minimum_required(VERSION 3.10)

project(BasicRayTracer VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(math)
add_subdirectory(imaging)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE vmath)
target_link_libraries(${PROJECT_NAME} PRIVATE imaging)