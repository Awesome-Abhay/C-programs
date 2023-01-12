// print all prime numbers between user given range using function.
#include<stdio.h>
int in()
{
    int a;
    scanf("%d",&a);
    return a;
}
void prime(n1,n2)
{
    for(int i=n1+1; i<n2; i++)
    {
        int c=0;
    for(int j=2; j<i; j++)
    {
        if(i%j==0)
        {
        c++;
        break;
        }
    }
    if(c==0)
    printf("%d\n",i);
    }
}
int main()
{
    system("cls");
    int n1,n2;
    n1=in();
    n2=in();
    printf("prime numbers between user given range are:- \n");
    prime(n1,n2);
    return 0;
}