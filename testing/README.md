#first task (task 0)
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

# Custom Printf Function

This project implements a custom version of the `printf` function, allowing you to format and print text in various ways. It includes support for format specifiers like `%s`, `%c`, `%d`, and more.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

- Supports various format specifiers, including `%s`, `%c`, `%d`, and more.
- Handles null pointers gracefully to avoid crashes.
- Returns the number of characters printed, similar to the standard `printf` function.

## Usage

To use this custom `printf` function in your C program, include the `main.h` header and call `_printf` with the desired format string and arguments.

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s! This is a custom printf function.\n", "world");
    return (0);
}


#Examples
Here are some example usages of the custom printf function:

#Printing a string:
_printf("Hello, %s!\n", "world");

#Printing a character:
_printf("First letter of the alphabet: %c\n", 'A');

#Printing an integer:
_printf("The answer is %d\n", 42);
