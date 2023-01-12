// program to take an element from user to delete all occurrences of that elememt.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of an array:- ");   // wrong output .. not a right program.
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int e;
    printf("enter the element of which you have to dlt occurences:- ");
    scanf("%d",&e);
    for(int i=0; i<n; i++)
    {
        if(a[i]==e)
        {
            for(int j=i; j<n-1; j++)
            {
                a[j]=a[j+1];
                n--;
                i--;
            }
        }
    }
    printf("array after deletion is:- ");
    for(int i=0; i<n; i++)
    printf("%d ",a[i]);
    return 0;
}