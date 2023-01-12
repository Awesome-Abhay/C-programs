// program to rotate an array.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int t=a[0];
    for(int i=0; i<n; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=t;
    printf("so the rotated array is:- ");
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
    return 0;
}