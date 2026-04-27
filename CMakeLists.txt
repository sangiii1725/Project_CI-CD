cmake_minimum_required(VERSION 3.10)
project(calculator_app)

set(CMAKE_CXX_STANDARD 14)

# Set build directory
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

# Add executable
add_executable(calculator_app main.cpp calculator.cpp)

# Custom target for running the executable
add_custom_target(run
    COMMAND ${EXECUTABLE_OUTPUT_PATH}/calculator_app
    DEPENDS calculator_app
    COMMENT "Running calculator_app..."
)