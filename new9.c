// You are given N numbers. You have to find the max difference between a pair of numbers.
// 1
// 2
// 2 4
#include<stdio.h>
int main() 
{
    system("cls");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0; j<n; j++)
            scanf("%d",&a[j]);
        int max=a[0];
        int min=a[0];
        for(int j=0; j<n; j++)
        {
            if(max<a[j])
                max=a[j];
            else if(a[j]<min)
                min=a[j];
        }
        int diff=max-min;
        printf("%d",diff);
    }
    return 0;
}