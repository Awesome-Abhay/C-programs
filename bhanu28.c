// program to print the sum of all natural numbers between the user given range.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    for(int i=(a+1); i<b; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}