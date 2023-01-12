#include <stdio.h>
int main()
{
    system("cls");
    int myage = 45;
    printf("%d\n",myage); //outputs the value of myage(45)
    printf("%p\n", &myage); //outputs the memory address of myage.
    return 0;
}

/* When a variable is created in C, a memory address is assigned to the variable.

The memory address is the location of where the variable is stored on the computer.

When we assign a value to the variable, it is stored in this memory address.

To access it, use the reference operator (&), and the result will represent where the variable is stored: */

/* Note: The memory address is in hexadecimal form (0x..). You probably won't get the same result in your program.

You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier.

You will learn much more about pointers in the next chapter. */

/* Why is it useful to know the memory address?
Pointers are important in C, because they give you the ability to manipulate the data in the computer's memory - this can reduce the code and improve the performance.

Pointers are one of the things that make C stand out from other programming languages, like Python and Java. */