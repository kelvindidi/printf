# Custom Printf Function

This project implements a custom version of the `printf` function, allowing you to format and print text in various ways. It includes support for format specifiers like `%s`, `%c`, `%d`, and more.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)


## Features

- Supports various format specifiers, including `%s`, `%c`, `%d`, and more.
- Handles null pointers gracefully to avoid crashes.
- Returns the number of characters printed, similar to the standard `printf` function.

## Usage

To use this custom `printf` function in your C program, include the `main.h` header and call `_printf` with the desired format string and arguments.


#include "main.h"

int main(void)
{
    _printf("Hello, %s! This is a custom printf function.\n", "world");
    return (0);
}
## Examples
Here are some example usages of the custom printf function:

Printing a string:
_printf("Hello, %s!\n", "world");

Printing a character:
_printf("First letter of the alphabet: %c\n", 'A');

Printing an integer:
_printf("The answer is %d\n", 42);
