#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int x = 2, y = 3;
    int v = 3 ^ 3;
    char dt = '21 dec 2020';
    double s = (3.0 / 8 - 2);
    int f;
    printf("when 5 is divided by 2 then it leaves the remainder:- %d\n", 5 % 2);
    printf("when 5 is divide by -2 then it leaves the remainder:- %d\n", 5 % -2);
    printf("when -5 is divided by 2 then it leaves the remainder:- %d\n", -5 % 2);
    printf("when 3.0 is divided by 9:- %f\n", 3.0/9);
    printf("the value of 2 to the power 5 is:- %f\n",pow(2,5));
    printf("the value of 8*y/3*x is %d\n", 8*y/3*x); /* 8*3=24 --> 24/3=8 --> 8*2=16 */ // wrong answer acc. to maths or bodmas.
    printf("the value of 3*x-4*y is %d\n", 3*x-4*y); // '*' is first priority.
    printf("the value of v:- %d\n",v);
    printf("the value of s:- %1f\n",s);
    
    return 0;
}
// there is no operator to perform exponentiation in c.