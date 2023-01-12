// check whether the student is pass or fail 
#include <stdio.h>
int main()
{
    system("cls");
    float sub1, sub2, sub3;
    float total;
    printf("enter the marks of subject 1:- ");
    scanf("%f", &sub1);
    printf("enter the marks of subject 2:- ");
    scanf("%f", &sub2);
    printf("enter the marks of subject 3:- ");
    scanf("%f", &sub3);
    total =(((sub1 + sub2 + sub3) / 300)*100);
    printf("the overall percentage is %f\n", total);
    if (total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("your total percentage is %f and you are pass",total);
    }
    else
        printf("your total percentage is %f and you are fail",total);
    return 0;
}

