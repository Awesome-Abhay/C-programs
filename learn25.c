// c program to find grade of a student according to his/her marks
#include <stdio.h>
int main()
{
    system("cls");
    int marks;
    printf("enter your marks:- ");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 5:
        printf("E");
        break;
    default:
        printf("F");
        break;
    }

    return 0;
}

// switch statement once used in learn6.c