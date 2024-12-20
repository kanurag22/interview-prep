/*Pointer Arithmetic:
    &type gets the address of the variable.
    &type + 1 gets the address just past the variable.
   (char *)(&type + 1) - (char *)(&type) calculates the difference in bytes between these two addresses.

   Type Safety:
        This macro works with variables, not type names. For type names, you could modify it with dummy variables or other tricks.
   Compile-Time Behavior:

    Unlike sizeof, this is evaluated at runtime. If you want compile-time evaluation for custom purposes, you'll need compiler extensions or template-like behavior in C++.
    For real-world use, always rely on the built-in sizeof operator, as it is optimized and standard across compilers.

%zu is a format specifier used in C's printf function (and related functions) to print values of type size_t. Here's what it means:

size_t Type:

size_t is an unsigned integer type defined in <stddef.h> (or <stdio.h> indirectly).
It is used to represent the size of objects in bytes, as returned by the sizeof operator.
Its exact size depends on the platform and compiler but is usually the same size as unsigned int or unsigned long.
Purpose of %zu:

%zu is specifically used for size_t values to ensure portability and correctness across platforms, regardless of whether size_t maps to unsigned int, unsigned long, or another type.
Why Use %zu Instead of %u?:

Using %u (for unsigned int) or %lu (for unsigned long) may lead to undefined behavior if the actual size of size_t does not match the expected type. %zu ensures compatibility.
*/
#include <stdio.h>

// Macro to calculate the size of any type
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

int main() {
    int a;
    double b;
    char c;
    struct {
        int a;
        char b;
    } myStruct;

    printf("Size of int: %zu bytes\n", my_sizeof(a));
    printf("Size of double: %zu bytes\n", my_sizeof(b));
    printf("Size of char: %zu bytes\n", my_sizeof(c));
    printf("Size of struct: %zu bytes\n", my_sizeof(myStruct));

    return 0;
}

