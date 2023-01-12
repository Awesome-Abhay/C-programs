#include<stdio.h>
int main()
{
    system("cls");
    int x,y;
    printf("enter the value of x:-");
    scanf("%d",&x);
    if(x>0)
    {
        printf("x is a positive number.\n");
    }
    else if(x>5)
    {
        printf("x is a big positive number.\n");
    }
    else
    { 
        printf("x is a negative number.\n");

    }
    printf("enter the value of y:-");
    scanf("%d",&y);
    (y>20) ? printf("good") : printf("bad"); // (ternary operator)we can also use this modern and short syntax for if and else statements.
    
    return 0;
}

// Same thing is explained in file learn24.c
