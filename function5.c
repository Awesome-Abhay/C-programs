// reverse the 1D array using function.
#include<stdio.h>
void reverse(int n, int a[n])
{
    for(int i=0; i<n/2; i++)
    {
        int t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
}
void printar(int n, int a[n])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    system("cls");
    int a[]={1,2,3,4,5};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    reverse(n,a);
    printf("reversed array is:- ");
    printar(n,a);
    return 0;
}