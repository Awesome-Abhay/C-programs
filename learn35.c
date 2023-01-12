// to get the reversed multiplication table of any number.
#include<stdio.h>
int main()
{
    system("cls");
    int a,num;
    printf("enter the number to get reversed multiplication table:-");
    scanf("%d",&a);
    for(int i=10; i>=1; i--)
    {
        num=a*i;
        printf("%d * %d = %d\n",a,i,num);
    }
    return 0;
}