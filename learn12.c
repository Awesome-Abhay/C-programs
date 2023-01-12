#include<stdio.h>
int main()
{
    system("cls");
    char c[]="Hello World!";
    char s[]={'H','e','l','l','o',' ','W','o','r','l','d','!','\0'}; //different format to write a string.
    printf("%1u\n",sizeof(c));  // '\0' represents that it is the end of the string.
    printf("%1u\n",sizeof(s));  // in the first method c already includes '\0' by itself.
    return 0;
}