// check whether the number is divisible by 97 or not 
#include<stdio.h>
int main()
{
    system("cls");
    int num,s;
    printf("enter the number:- ");
    scanf("%d",&num);
    
    if(num%97==0)
    {
        printf("divisible");
    
    }
    else
    printf("not divisible");
    return 0;
}