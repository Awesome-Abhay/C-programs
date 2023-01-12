// program of a simple calculator using switch case.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b;
    char ch; 
    printf("enter the value of a and b:- ");
    scanf("%d %d",&a,&b);
    printf("enter the operation:- ");
    scanf("\n"); // use this for proper working or scanf the operation before scanning the values of a and b;
    scanf("%c",&ch);
    switch(ch)
    {
        case '+': printf("%d",a+b);
        break;
        case '-': printf("%d",a-b);
        break;
        case '*': printf("%d",a*b);
        break;
        case '/': printf("%d",a/b);
        break;
    }
    return 0;
}