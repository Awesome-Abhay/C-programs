// Program to check whether the number is divisible by 3 or 7 or both or by none.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    scanf("%d",&a);
    if(a%3==0)
    {
        if(a%7==0)
        printf("by both");
        else
        printf("by 3 only");
    }
    else if(a%7==0)
        printf("by 7 only");
    else 
        printf("by none");
    
    return 0;
}