// program to find the frequency of a given element in an array.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of an array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int f,c=0;
    printf("enter the number whose frequency have to be found:- ");
    scanf("%d",&f);
    for(int i=0; i<n; i++)
    {
        if(a[i]==f)
        c++;
    }
    printf("frequency of the number %d is:- %d",f,c);
    return 0;
}