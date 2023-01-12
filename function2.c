// program to add, subtract and multiply two user given values using functions.
#include<stdio.h>
char input()
{
    char ch;
    scanf("\n");
    scanf("%c",&ch);
    return ch;
}
int in()
{
    int a;
    scanf("%d",&a);
    return a;
}
void add(a,b)
{
int c=a+b;
printf("the addition of these two numbers is:- %d",c);
}
void multiply(a,b)
{
    int c=a*b;
    printf("the multiplication of these two numbers is:- %d",c);
}
void substract(a,b)
{
    int c=a-b;
    printf("the subtraction of these two numbers is:- %d",c);
}
int main()
{
    system("cls");
    int a,b;
    char c;
    printf("enter the number:- ");
    a=in();
    printf("enter another number:- ");
    b=in();
    printf("enter the operation you have to apply:- ");
    c=input();
    if(c=='+')
    add(a,b);
    else if(c=='-')
    substract(a,b);
    else if(c=='*')
    multiply(a,b);
    return 0;
}