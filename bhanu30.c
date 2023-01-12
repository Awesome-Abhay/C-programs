// Armstrong no.
#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    int n,sum=0,c=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        int remainder=n%10;
        c=c+1;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        int r=n%10;
        int p=pow(r,c);
        sum=sum+p;
        n=n/10;
    }
    if(sum==temp)
    printf("armstrong no.");
    else
    printf("not");
    return 0;
}