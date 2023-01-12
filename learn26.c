#include<stdio.h>
int main()
{
    system("cls");
    int a=10;
    if(a=11) // output will be "i'm 11" because here the operator is assignment operator(single operator) and if there would be double operator then it would be comparison operator.
    {
        printf("i'm 11");
    }
    else 
    printf("i'm not 11");
    return 0;
}