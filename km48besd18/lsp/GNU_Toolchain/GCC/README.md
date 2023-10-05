
# GCC - GNU C/C++ Compiler

## GCC Command line options:

### Preprocessor Options

	-E Stop after the preprocessing stage.
	-I <user defined header file path>
	-D[MACRO] Define a MACRO
	-U[MACRO] Undefine a MACRO

### Compiler Options

	-S Stop after the compilation stage.
	-g enable debugging symbol
	-Wall enable all warnings
	-Werror Convert warnings into errors

### Assembler Options

	-c Stop after the assembler stage.

### Linker Options
	
	-L <user defined library path>
	-l<library_name>
	-o output

### Common Options

	-v Print the commands executed to run the stages of compilation.
	@file Read command line options from file. Options in file are separated by whitespace.
	-funsigned-char char type is treated as unsigned type.
	-fsigned-char char type is treated as signed type.


## Examples:

	+ hello/hello.c - compilation stages (preprocessor, compiler, assembler, linker)
	+ addsub/main.c,sub.c,add.c,myinclude.h - How to compile multiple source files.

