// to find the absolute value of a number.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b;
    printf("enter the number:- ");
    scanf("%d",&a);
    b= a*((a>0)-(a<0)); //(a<0)*(-a)+(a>0)*a;
    printf("the absolute value is:- %d",b);
    return 0;
}