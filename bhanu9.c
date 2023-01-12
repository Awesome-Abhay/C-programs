// program to check whether the number is greater or not using short circuiting.
#include<stdio.h>
int main()
{
    system("cls");
    int a, b;
    printf("enter the number a and b:- ");
    scanf("%d" "%d",&a,&b);
    (a>b)&& printf("a is greater than b");
    (a>b)|| printf("a is not greater than b");
    return 0;
}