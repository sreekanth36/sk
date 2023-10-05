<!-- vim-markdown-toc GFM -->

* [1. Static Library vs Dynamic Library](#1-static-library-vs-dynamic-library)
* [2. Static Linker vs Dynamic Linker](#2-static-linker-vs-dynamic-linker)
		* [creation of executable file using Dynamic linker](#creation-of-executable-file-using-dynamic-linker)
		* [cross verify dynamic executable file with "file" command](#cross-verify-dynamic-executable-file-with-file-command)
		* [creation of executable file using Static linker](#creation-of-executable-file-using-static-linker)
		* [cross verify static executable file with "file" command](#cross-verify-static-executable-file-with-file-command)
		* [Executable and Linkable Format (ELF) is a standard binary file format.](#executable-and-linkable-format-elf-is-a-standard-binary-file-format)
		* [compare static & dynamic image sizes](#compare-static--dynamic-image-sizes)
* [3. Create User define Libraries](#3-create-user-define-libraries)
	* [3.1. Procedure for Creation of static libraries](#31-procedure-for-creation-of-static-libraries)
	* [3.2. Procedure for Creation of Dynamic libraries (Shared Libraries)](#32-procedure-for-creation-of-dynamic-libraries-shared-libraries)
* [4. Telling GCC where to find the User defiend header file:](#4-telling-gcc-where-to-find-the-user-defiend-header-file)
* [5. Telling GCC where to find the shared library:](#5-telling-gcc-where-to-find-the-shared-library)
* [6. Making the library available at runtime:](#6-making-the-library-available-at-runtime)
* [7.Examples:](#7examples)

<!-- vim-markdown-toc -->

## 1. Static Library vs Dynamic Library

* Static Linkers use static libraries which are appended the executable image at build time.
* Dynamic Linkers use dynamic libraries which carrys symbolic reference in exectable and physically loaded at runtime
* Size is Different

## 2. Static Linker vs Dynamic Linker

####	creation of executable file using Dynamic linker
`$ gcc hello.c -o hello-dyn (by default)`

####	cross verify dynamic executable file with "file" command
`$ file hello-dyn`

hello-dyn: ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), **dynamically linked**, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=847ece746b56cba30c2cca74ef5fb73245b351c5, not stripped
	
	
####	creation of executable file using Static linker
`$ gcc -static hello.c -o hello-static`
	
####	cross verify static executable file with "file" command
`$ file hello-static`

hello-static: ELF 64-bit LSB executable, x86-64, version 1 (GNU/Linux), **statically linked**, for GNU/Linux 3.2.0, BuildID[sha1]=fff77a5ea4dfa605b729654d58bbd132d01ff9fd, not stripped

####	Executable and Linkable Format (ELF) is a standard binary file format.
`$ readelf -a hello | more (readelf is a details of ELF file)`

#### compare static & dynamic image sizes

    $ ls -l
    -rwxrwxr-x 1 km km   8304 Jan 26 12:01 hello-dyn  (8.3KB)
    -rwxrwxr-x 1 km km 845120 Jan 26 12:01 hello-stat (845KB)

## 3. Create User define Libraries

### 3.1. Procedure for Creation of static libraries

	Step1: Implementaion of Source code.
		add.c
		sub.c

	Step2: Compile source code up to object file.
		$ gcc -c add.c sub.c

	Step3: Use UNIX archive tools create library image.
		$ ar -rcs libcalc.a add.o sub.o

	$ file libcalc.a
	libourown.a: current ar archive
	
### 3.2. Procedure for Creation of Dynamic libraries (Shared Libraries)

	Step1: Implementaion of Source code.
		add.c
		sub.c
	
	Step2: Compile source to create position independent relocatale.
		$ gcc -c -fpic add.c
		$ gcc -c -fpic sub.c
	Step3:
		$ gcc -shared -o libcalc.so add.o sub.o

	$ file libcalc.so
	libourown.so: ELF 32-bit LSB shared object, Intel 80386, version 1 (SYSV), dynamically linked, not stripped

## 4. Telling GCC where to find the User defiend header file:

	-I <USER DEFINED HEADER PATH>

## 5. Telling GCC where to find the shared library:
	
	Why -l<library name>, -L and LD_LIBRARY_PATH?
	-l<library name> means compiler search the library
	-L <path> means gcc compiler checks libraries at compilation time in path location.

## 6. Making the library available at runtime:

	LD_LIBRARY_PATH=<path> means binary execution time checks the library PATH.



## 7.Examples:

	libraries/addsub_lib: how to create static and dynamic libraries

