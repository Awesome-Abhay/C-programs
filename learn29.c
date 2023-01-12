// Greatest of four numbers.
#include <stdio.h>
int main()
{
    system("cls");
    int a, b, c, d;
    printf("enter the numbers:- ");
    scanf("%d""%d""%d""%d",&a, &b, &c, &d);
 if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d", a);
            }
            else
                printf("%d", d);
        }
        else if (c > d)
        {
            printf("%d", c);
        }
        else
            printf("%d", d);
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d", b);
        }
        else
            printf("%d", d);
    }
    else if (c > d)
    {
        printf("%d", c);
    }
    else
        printf("%d", d);
    return 0;
}