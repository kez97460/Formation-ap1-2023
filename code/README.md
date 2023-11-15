# Automatically setup project
The software that generated this project configuration can be found on [Github](https://github.com/kez97460/Automatic-project-setup).
This README is here to help you understand how to properly use this setup.

## Directories

### build
The Build directory will contain the object files (.o) that are generated when compiling.

### include
The include directory will contain all libraries included by the project (.h and .c files). These libraries may be put into as many independent folders as needed.

### src
The src directory contains the source files (.c), including the main function.

### Example
This structure is an example of how a project could look like :

```
|--lib
|  |
|  |--Bar
|  |  |- Bar.c
|  |  |- Bar.h
|  |
|  |--Foo
|  |  |- Foo.c
|  |  |- Foo.h
|  
|--src
|  |- main.c
```

## Makefile
This project can be compiled using the `make` command (assuming you have it installed). The object files, as well as the executable, which are generated during the compilation, may be removed at any time by using the `make clean` command.

The makefile can be edited to change the compiler, compilation flags or the name of the generated executable.
