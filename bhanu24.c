// to check whether the number is positive, negative or equals to zero using switch statement.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the number:- ");
    scanf("%d",&a);
    switch(a>=0)
    {
        case 1: 
        switch(a>0)
        {
            case 1: printf("positive");
            break;
            default: printf("zero");
            break;
        }
        break;
        case 0: printf("negative");
        break;
    }
    return 0;
}