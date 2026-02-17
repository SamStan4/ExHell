cmake_minimum_required(VERSION 3.22)
project(MySimpleProject VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable compile_commands.json (good for clangd)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add executable
add_executable(MySimpleProject src/main.cpp)