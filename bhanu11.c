// to get the better understanding of unary operators.
#include<stdio.h>
int main()
{
    system("cls");
    int a=2,b=3,c=5,x;
    x=(a++)+(b--)+(c++)*(a++)-(c++)*a;
    int y= (++b)+(--a)+(--c)*(++c)-c;
    printf("the value of x is:- %d\n",x);
    printf("the value of y is:- %d",y);

    return 0;
}