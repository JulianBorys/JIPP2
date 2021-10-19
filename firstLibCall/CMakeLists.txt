cmake_minimum_required(3.20)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/firstLib/include)

add_executable(firstLibCall main.cpp)

target_link_libraries(firstLibCall firstLib)