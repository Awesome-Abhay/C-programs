#include<stdio.h>
int main()
{
    system("cls");
    char name[30];
    printf("write your name and press enter:- ");
    scanf("%[^\n]s",name); //we don't have to specify the reference operator (&) when working with strings in scanf().
    printf("Hello %s", name);
    return 0;
}

// scanf("%[^\n]s"); // use this to read upto new line character.