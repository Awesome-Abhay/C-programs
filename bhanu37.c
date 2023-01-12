// to check whether the number is palindrome.
#include<stdio.h>
int main()
{
    system("cls");
    int n, reverse=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        int r=n%10;
        reverse=r+(reverse*10);
        n=n/10;
    }
    if(reverse==temp)
    printf("palindrome");
    else
    printf("not");
    return 0;
}