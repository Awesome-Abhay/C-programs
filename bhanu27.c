// program to print the sum of all prime numbers between user given range.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(int i=(a+1); i<b; i++)
    {
        int c=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
            c=1;
            break;
            }
        }
           if(c==0)
           sum=sum+i;
           
    }
    printf("%d\n",sum);
    return 0;
}
        