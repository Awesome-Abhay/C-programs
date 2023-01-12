// to get the sum of the multiples of any number.
#include <stdio.h>
int main()
{
    system("cls");
    int sum = 0, num;
    printf("enter the number:- ");
    scanf("%d", &num);
    for (int i = num; i <= num * 10; i += 8)
    {
        sum = sum + i;
    }
    printf("the sum of the multiples of %d is :- %d", num, sum);
    return 0;
}