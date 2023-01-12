// wrong program to delete duplicacies of each element.
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
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j; k<n; k++)
                {
                    a[k]=a[k+1];
                }
            }   
        }
    }
    printf("now the array after deletion is:- ");
    for(int i=0; i<n; i++)
    printf("%d ",a[i]);
    return 0;
}