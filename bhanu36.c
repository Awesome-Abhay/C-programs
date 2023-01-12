// program to check whether the number is perfect.
#include<stdio.h>
int main()
{
    system("cls");
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==temp)
    printf("perfect no.");
    else
    printf("not");
    return 0;
}