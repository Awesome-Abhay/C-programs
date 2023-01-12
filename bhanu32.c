// program to check whether the number is a part of that fibonacci series.
#include<stdio.h>
int main()
{
    system("cls");
    int n,n1,t1,t2,nexterm,c=0;
    printf("number upto which the series have to be printed:- ");
    scanf("%d",&n);
    printf("no. you have to find:- ");
    scanf("%d",&n1);
    printf("numbers from which series is to be started:- ");
    scanf("%d %d",&t1,&t2);
    nexterm=t1+t2;
    for(int i=1; i<=n; i++)
    {
        if(n1==t1)
        {
        printf("yes.");
        c++;
        break;
        }
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    if(c==0)
    printf("no");
    return 0;
}