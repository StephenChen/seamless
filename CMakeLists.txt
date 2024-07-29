# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(cal)

# Find the Python interpreter, library and include directories
find_package(PythonLibs REQUIRED)

# Add the pybind11 include directories
include_directories(${PYTHON_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/extern/pybind11/include)

# Add the C++ source files
add_library(cal SHARED cal.cpp)

# Link the Python library
target_link_libraries(cal ${Python_LIBRARIES})

# Set the Python extension module name
set_target_properties(cal PROPERTIES PREFIX "" SUFFIX ".so")

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)