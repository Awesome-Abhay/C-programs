// Program on working of ATM machine which print at least 1 note of 100.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the amount:- ");
    scanf("%d",&a);
    a=a-100;
    int tt=a/2000;
    printf("2000:- %d\n",tt);
    tt=a%2000;
    int fh=tt/500;
    printf("500:- %d\n",fh);
    fh=tt%500;
    int oh=(fh/100)+1;
    printf("100:- %d\n",oh);
    return 0;
}