// Program to check whether the no. is even or odd by using bitwise operators.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the no.:- ");
    scanf("%d",&a); 
    if((a&1)==0)  // a&1==1 --> odd
     printf("even");
    else
     printf("odd");
    return 0;
}

// if((a|1)==(a+1)) --> even
// if((a|1)==a) --> odd
// if((a^1)==(a+1)) --> even
// if((a^1)==(a-1)) --> odd