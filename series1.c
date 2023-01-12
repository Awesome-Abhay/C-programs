// sum of the series:- 1^3+3^3+5^3+7^3+......n
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the value of n:- ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
        int t=i;
        int s=t;
        for(int j=1; j<3; j++)
        {
            t=t*s;
        }
        sum=sum+t;
        }
    }
    printf("%d",sum);
    return 0;
}