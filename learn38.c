// to get the factorial of any number.
#include<stdio.h>
int main()
{
    system("cls");
    int num,fact=1;
    printf("enter the number to get the factorial of it:- ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("%d! = %d",num,fact);
    return 0;
}