// to get the sum of first n natural numbers.
#include<stdio.h>
int main()
{
    system("cls");
    int sum=0,num;
    printf("enter the number:- ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        sum=sum+i;
        
    }
    printf("the sum of first %d natural numbers is:- %d\n",num,sum);
    return 0;
}

/* int i=1;
    do
    {
        sum =sum +i;
        i++;

    }
    while(i<=num); */

/* int i=1;
   while(i<num)
   {
      sum=sum+i;
      i++;
   }    */