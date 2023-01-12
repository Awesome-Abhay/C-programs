// to get the multiplication table of any number
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the number to get the multiplication table:- ");
    scanf("%d",&a);
    for(int i=1; i<=10; i++)
    {
        int num=a*i;
        printf("%d * %d = %d\n",a,i,num);

    }
    return 0;
}