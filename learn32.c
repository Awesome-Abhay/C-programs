// to print the natural numbers from 10 to 20
#include <stdio.h>
int main()
{
    system("cls");
    int i, num = 10;
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", num);
        num = num + 1;
    }
    return 0;
}

// error:- 11,12,13 and 14 are the extra numbers which have been printing along with required natural numbers.