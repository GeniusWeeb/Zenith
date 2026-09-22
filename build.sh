#!/bin/bash

# Exit immediately if any command fails
set -e

echo "========================================"
echo "      COMPILING CHESS ENGINE...         "
echo "========================================"

# Configure with CMake (if build folder doesn't exist or flags change) and build
cmake -B build -S .
cmake --build build

echo "========================================"
echo "        BUILD SUCCESSFUL!               "
echo "========================================"
echo "Running ./build/Zenith:"
echo ""

# Automatically run the compiled executable
./build/Zenith