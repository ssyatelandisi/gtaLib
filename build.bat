cmake --build build --target clean
cmake -G "MinGW Makefiles" -S . -B build
cmake --build build
timeout 3