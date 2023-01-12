#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the value of a:- ");
    scanf("%d",&a);
    int *ptr;
    ptr=&a;
    printf("address of the variable a is:- ");
    printf("%d",ptr);
    
    return 0;
}