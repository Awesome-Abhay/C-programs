// to get the understanding of comma operator.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the value of a:- ");
    scanf("%d",&a);
    if(a==(10,19,20))
    {
        printf("hello");
    }
    else
    printf("bye");
    return 0;
}