// Greatest of three numbers.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b,c,greatest;
    printf("enter the numbers:- ");
    scanf("%d""%d""%d",&a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
           printf("%d",a);
        }
        else
         { printf("%d",c);}
    }
   else if(b>c)
    {
      printf("%d",b);
    }
    else 
    {
        printf("%d",c);
    }
    return 0;
}