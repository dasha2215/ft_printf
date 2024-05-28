# ft_printf

## Overview

The `ft_printf` project is a custom implementation of the standard C library function `printf()`. This project includes the functionality to handle various format specifiers and conversions, making it a versatile tool for formatted output in C programs.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
  - [Mandatory Conversions](#mandatory-conversions)
- [License](#license)

## Introduction

The `ft_printf` function is designed to mimic the behavior of the standard `printf()` function. It supports a wide range of format specifiers, including characters, strings, pointers, integers, unsigned integers, and hexadecimal numbers. This custom implementation provides a deeper understanding of how formatted output works in C, and offers a flexible alternative to the standard library function.

## Features

- Implementation of `ft_printf()` function.
- Handling of various format specifiers and conversions.
- Comprehensive Makefile for building the library.
- Adherence to strict coding standards and norms.

## Installation

To use the `ft_printf` library in your projects, follow these steps:

1. Clone the repository:

 ```sh
git clone https://github.com/dasha2215/ft_printf.git
cd ft_printf
```

2. Compile the library using the provided Makefile:

```sh
make
```

3. Include the ft_printf.h header in your project and link the compiled library:

```c
#include "ft_printf.h"
```

4. Use the following command to compile your project with the ft_printf library:

```sh
cc -o my_program my_program.c -L. -lftprintf
```

## Usage

To use the `ft_printf` function, include the header file and call `ft_printf` as you would call the standard `printf`.

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

## Functions

### Mandatory Conversions

The `ft_printf` function handles the following conversions:

- `%c` : Prints a single character.
- `%s` : Prints a string (as defined by the common C convention).
- `%p` : Prints a void pointer in hexadecimal format.
- `%d` : Prints a decimal (base 10) number.
- `%i` : Prints an integer in base 10.
- `%u` : Prints an unsigned decimal (base 10) number.
- `%x` : Prints a number in hexadecimal (base 16) lowercase format.
- `%X` : Prints a number in hexadecimal (base 16) uppercase format.
- `%%` : Prints a percent sign.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
