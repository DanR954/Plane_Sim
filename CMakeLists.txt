cmake_minimum_required(VERSION 3.10)
project(Plane_Sim)

# C++ Standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(Plane_Sim src/main.cpp "src/engine.cpp" "src/fuel_tank.cpp" )