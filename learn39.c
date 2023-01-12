// to print the even numbers upto the user's value.
#include<stdio.h>
int main()
{
    system("cls");
    int num;
    printf("enter the number upto which you want to print the even numbers:- ");
    scanf("%d",&num);
    int c=num*2;
    for(int i=2; i<=c; i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}