//strong no.
#include<stdio.h>
int main()
{
    system("cls");
    int n,r,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        int f=1;
        for(int i=r; i>=1; i--)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(temp==sum)
    printf("%d is a strong number",sum);
    else
    printf("not");
    return 0;
}