// enter the number to get the numbers printed uptill the number.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the number:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}