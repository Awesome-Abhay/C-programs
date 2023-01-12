#include<stdio.h>
int main()
{
    system("cls");
    int x=10,y,z;
    y=5;
    z=3;
    x+=10; // we can use + operator like this also and the value of x is 20 now.
    printf("%d \n",x); // output will be 20.
    printf("%d \n", y>z); // output will be 1 because it is true.
    printf("%d \n", y<=z); // output will be 0 for this because the statement is wrong.
    printf("%d \n", y==z); // output will be 0 for this also.
    printf("%d \n", x>y && x>z); // output will be 1 for this.
    printf("%d \n", x>y || x<z); // output will be 1 because one of the condition is true.
    printf("%d \n", !(x<y || x>y)); // output will be reverse so it will be 0.
    return 0;
}