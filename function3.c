#include<stdio.h>
int input()    // try to solve it by using void.
{
    int s;
    scanf("%d",&s);
    return s;
}
void scan(int t,int a[t])
{
    printf("give values to this array:- ");
    for(int i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
}
void print(int t,int a[t])
{
    printf("your array is:- ");
    for(int i=0; i<t; i++)
    {                                  
        printf("%d ",a[i]);
    }
}
int main()
{
    system("cls");
    int n;
    printf("enter the value of n:- ");
    n=input();
    int b[n];
    scan(n,b);
    print(n,b);
    return 0;
}