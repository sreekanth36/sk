1. Assume that you are working on a calculator project contained in the directory
calculator. under this directory there are several subdirectories with names
"lib","doc","include“,"src“ and “bin”.
2. The objective is to create a top level Makefile in the calculator directory and each of
the source code directories: lib and src.
3. The include directory contains the header files for the project and does not need a
Makefile as these don't have to be compiled separately.
4. When make is invoked in the calculator directory it should automatically invoke the
Makefile in each of the src directories automatically and build a library in the "lib"
directory and two executables in each of "src" directory.
5. Create any source files with all their header files in the include directory.
6. GNU Build System supports the following configurations:
• DEBUG_BUILD; STATIC_BUILD; ADD ; SUB; MUL ; DIV;