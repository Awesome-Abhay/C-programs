// check whether the number is a part of fibonacci series.(by Bhanu sir)
#include<stdio.h>
int main()
{
    system("cls");
    int a=0,b=1,n,c,z,d=0;
    scanf("%d",&n);
    printf("enter the number which you have to check:- ");
    scanf("%d",&z);
    for(int i=1; i<=n; i++)
    {
        c=a+b;
        if(z==c)
        {
            printf("Yes");
            d++;
            break;
        }
        a=b;
        b=c;
    }
    if(d==0)
    printf("No");
return 0;
}