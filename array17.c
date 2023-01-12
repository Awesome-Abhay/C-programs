// program to merge two arrays in one.(BY MANNU)
#include<stdio.h>
int main()
{
    system("cls");
    int n1;
    printf("enter the size of 1st array:- ");
    scanf("%d",&n1);
    int a[n1];
    printf("enter the elements:- ");
    for(int i=0; i<n1; i++)
    scanf("%d",&a[i]);
    int n2;
    printf("enter the size of 2nd array:- ");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the elements:- ");
    for(int i=0; i<n2; i++)
    scanf("%d",&b[i]);
    int n3=n1+n2;
    int c[n3];
    for(int i=0; i<n1; i++)
    c[i]=a[i];
    for(int i=0; i<n2; i++)
    c[n1+i]=b[i];
    printf("array after merging is:- ");
    for(int i=0; i<n3; i++)
    printf(" %d ",c[i]);
    return 0;
}