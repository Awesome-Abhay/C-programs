// to get the better understanding of short circuiting.
#include<stdio.h>
int main()
{
    system("cls");
    int a=60,b=10,k;
    k=(a!=10)&&(b=50);
    printf("%d\n",k);    // 1
    printf("%d",b);      // 50
    return 0;
}
