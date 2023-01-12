// priority of operators, if two operators are of same priority then compiler will execute from left.
#include<stdio.h>
int main()
{
    system("cls");
    int x=2, y=3, z=3, k=1;
    printf("the result will be:- ");
    int result = 3*x/y-z+k;
    // 3*2/3-3+1
    // 6/3-3+1
    //2-3+1
    // -1+1
    // 0
    printf("%d",result);
    return 0;
}