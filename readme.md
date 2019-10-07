# C++ Valgrind
---

## Overview

Simple C++ project to work with:
- cmake
- googletest
- valgrind

## Standard install via command-line

- Go to the folder where you want to clone this repository.
- Right-click on empty space and select *Open in Terminal*.
- Run the commands stated below.
```shell script
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
./app/shell-app
```
## Location of output files

- All the output files are located at the base level of the project directory. No need to check any sub-directory for them.
- The output files have been listed below:
    - Valgrind error files: *valgrind_output_before_fixes.txt   valgrind_output_after_fixes.txt*
    - KCacheGrind file: *KCacheGrind_profiler_output.png*
    - CppLint output file: *cpplint_output.txt*