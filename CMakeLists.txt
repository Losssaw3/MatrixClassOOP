cmake_minimum_required(VERSION 3.10)

project(Matrix)

# List your source files excluding demo.cpp
set(SOURCE_FILES
matrix.cpp
row.cpp
task.cpp
)

# Add executable and include demo.cpp
add_executable(demo demo.cpp ${SOURCE_FILES})

# Include headers
target_include_directories(demo PUBLIC include)