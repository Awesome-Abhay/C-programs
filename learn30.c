// to check whether the number is prime or not.
#include <stdio.h>
int main()
{
    system("cls");
    int div = 2, n;
    printf("enter the number:- ");
    scanf("%d", &n);
   for(int i=2; i<n; i++)
   {
       if(n%i==0)
       {
        printf("non prime number");
        break;
       }
    
   }

    
    return 0;
}