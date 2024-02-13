# Makefile

##  1. Project Configuration

This section includes the initial setup and configuration details necessary for the build process.

NAME = output_name: Specifies the name of the output file (static library in this context).

CC = gcc: Defines the compiler to be used for the project.

CFLAG = -Wall -Werror -Wextra: Sets the compiler flags to control the compilation process.


## 2. Source and Object Files

These lines deal with specifying which source files are to be compiled and how object files are managed.

SRC_FILES = ft_printf_utils.c ft_printf.c: Lists the source files to be compiled.

OBJS = $(SRC_FILES:.c=.o): Automatically generates a list of object files from the source files.


## 3. Compilation Rules

This category includes the rules for how to compile source files into object files and how to link object files into the final output.

%.o: %.c: A pattern rule for compiling .c files into .o files.

$(CC) -c $(CFLAG) $^: The command used to compile the source files.


## 4. Build Targets

These are the targets that you can explicitly call using the make command to build the project, clean up files, or rebuild the project.

all: $(NAME): The default target, which builds the project.

$(NAME): $(OBJS): Describes how to build the final library file from object files.

clean:: A target to remove object files to clean the project directory.

fclean: clean: Extends the clean target to also remove the final output file.

re: fclean all: A target to rebuild the project from scratch.


## 5. Special Targets

.PHONY: all clean fclean re: Indicates that the listed targets are not associated with files but represent actions.



Organization Summary

- Project Setting and Configuration
    - Establishes the foundational settings like the compiler, output name, and compilation flags.
- Source and Object File Management
    - Specifies which files are part of the project and how they are transformed during the build process.
- Compilation and Linking Instructions
    - Provides detailed instructions on how to compile and link the project's files.
- Build Management
    - Offers targets for building, cleaning, and rebuilding the project, facilitating easy project maintenance.
- Special Directives
    - Enhances the functionality of the Makefile with directives like .PHONY to clarify the purpose of certain targets.
