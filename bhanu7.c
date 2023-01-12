// program to get the better understanding of unary operators.
#include<stdio.h>
int main()
{
    system("cls");
    int a=10, b=11, c=12, d=13;
    a=b++; //a=11; b=12;
    
    b=c++; // b=12; c=13;
   
    a=a++; //a=11; 
    
    d=c++; //d=13; c=14;
    
    b=++b; //b=13;
    
    c=++a; //c=12; a=12;
    printf("%d\n%d\n%d\n%d",a,c,b,d);
   
    return 0;
}