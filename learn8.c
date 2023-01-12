// program to get the use of continue statement

#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 0; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;   // in the output, 4 will not be printed as the value of i becomes 4, loop jumps directly to the next value.
        }
        printf("%d\n", i); //continue statement break one iteration in the loop.
    }
    return 0;
}
/* break is used to discontinue the loop and to get out of the loop*/