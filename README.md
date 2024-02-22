
<img src="https://img.shields.io/badge/c-%23A8B9CC.svg?&style=for-the-badge&logo=c&logoColor=black" />

# Project introduction

This is my first project completed at 42 School, where the primary goal is to create a custom C library, `libft`, which consists of various standard and additional functions that will be invaluable throughout the curriculum.


- [Project Name](#project-name)
- [Files to Submit](#files-to-submit)
- [Makefile Rules](#makefile-rules)
- [Authorized Functions](#authorized-functions)
- [Using libft](#using-libft)
- [Description](#description)
- [Conversion Specifications](#conversion-specifications)
- [Requirements](#requirements)
- [Implementation Overview](#implementation-overview)

## Project Name

- **Library Name:** `libft.a`

## Files to Submit

- **Essential Files:** `Makefile`, `libft.h`, `ft_*.c`
- **Compilation:** Compiled with flags `-Wall -Werror -Wextra`
- **Library Creation:** Utilize the `ar` command; the use of `libtool` is strictly forbidden.

## Makefile Rules

- **Available Commands:** `NAME`, `all`, `clean`, `fclean`, `re`

## Authorized Functions

- For this project, the usage of global variables is prohibited. Functions need to be concise and if necessary, split using the `static` keyword to limit their scope within files. All contributions must be located at the root of your repository, ensuring no unused files are included.

## Using libft

- Incorporating `libft` in future projects allows for the reuse of well-structured and tested functions, streamlining the development process and enhancing code efficiency.

## Description

The `libft` project involves writing a library that contains a set of functions mirroring those found in the C standard library, along with additional utility functions not included in `libc`. This project serves not only as an introduction to basic C programming but also as a foundational tool for the 42 curriculum.

## Conversion Specifications

- Initially, recreate functions from the `libc` with similar behaviors and prototypes, prefixed with `ft_`. For instance, `strlen` becomes `ft_strlen`. Functions such as `isalpha`, `isdigit`, `memset`, among others, are to be redefined.

## Requirements

- **Technical Requirements:**
  - No global variables.
  - Complex functions must be segmented and declared as `static`.
  - Place all files at the root of the repository.
  - Do not submit unused files.
  - Compile all `.c` files with `-Wall -Werror -Wextra`.
  - Create the library using the `ar` command.
  - `libft.a` must be situated at the root of the repository.

## Implementation Overview

The project is divided into two parts:
- **Part 1 - Libc Functions:** Recreate specific `libc` functions.
- **Part 2 - Additional Functions:** Implement a series of additional functions that extend beyond the standard library, providing more tools for future projects.

Each function is carefully crafted to adhere to the specifications and behaviors of their original counterparts, with rigorous testing to ensure reliability and efficiency.


