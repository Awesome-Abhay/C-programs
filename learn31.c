// to check whether the character is lowercase or not.
#include<stdio.h>
int main()
{
    system("cls");
    char ch;
    printf("enter the character:- ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        printf("the character is lowercase");
    }
    else 
    printf("the character is not lowercase");
    return 0;
}