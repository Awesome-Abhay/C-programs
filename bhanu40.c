// program to check whether the no. is a part of fibonacci series.(By Bhanu sir)
#include<stdio.h>
int main()
{
    system("cls");
    int t1=0,t2=1,nexterm,n,c=0;
    printf("enter the number which you have to check:- ");
    scanf("%d",&n);
    while(t1<=n)
    { 
       nexterm=t1+t2;
       if(t1==n)
       {
        printf("yes");
        c++;
        break;
       }
       t1=t2;
       t2=nexterm;
       
    }
    if(c==0)
    printf("no");
    return 0;
}