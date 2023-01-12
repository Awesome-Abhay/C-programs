#include <stdio.h>
int main()
{
    system("cls");
    int age;
    int vipPass = 0;
    // vipPass=1;
    printf("enter the age:-");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || vipPass == 0)
    {
        printf("you can drive");
    }
    else
        printf("you can not drive");
    return 0;
}