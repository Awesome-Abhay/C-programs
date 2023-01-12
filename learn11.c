#include<stdio.h>
int main()
{
    system("cls");
    char c[]="Hello World!";
    printf("%c\n",c[0]); // we use %c(format specifier) to print single character.
    printf("%s",c);   // we use %s format specifier to tell the compiler that we are working with strings.
    return 0;
}