// program to check whether the no. is power of 2.(Hons. exam sem. 1)
#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    int n,c=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
       if(n==(pow(2,i)))
       {
       printf("yes, %d is the power of 2",n);
       c++;
       break;
       }
    }
    if(c==0)
    printf("no");
    return 0;
}