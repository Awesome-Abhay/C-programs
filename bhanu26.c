// program to print all the numbers between user given range and check whether the number is prime or not.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=(a+1); i<b; i++)
    {
        int c=0;
        for(int j=2; j<i; j++)
        {
          if(i%j==0)
          {
          printf("%d is a non prime no.\n",i);
          c=1;
          break;
          }
        }
        if(c==0)
          printf("%d is a prime no.\n",i);
    }
    return 0;
}