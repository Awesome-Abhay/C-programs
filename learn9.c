// program to get the use of break statement

#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 0; i <= 10; i++)
    {
        if (i == 2)
        {
            break; // break statement is used to get out of the loop.
        }
        printf("%d\n", i);
    }
    return 0;
}