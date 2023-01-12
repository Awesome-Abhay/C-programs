// program to check whether the no. is prime or not.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    scanf("%d",&a);
    int c=0;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
        printf("non prime");
        c=1;
        break;
        }
    }
    if(c==0)
    printf("prime no.");
    return 0;
}
