// program to print the fibonacci series.
#include<stdio.h>
int main()
{
    system("cls");
    int n,t1,t2,nexterm;
    printf("enter the number upto which the series have to be printed:- ");
    scanf("%d",&n);
    printf("enter the numbers from where the series is to be started:- ");
    scanf("%d %d",&t1,&t2);
    printf("%d %d",t1,t2);
    nexterm=t1+t2;
    for(int i=1; i<=(n-2); i++)
    {
        printf(" %d",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    return 0;
}