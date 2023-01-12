// array and good subarrays.(coding blocks contest ques.)
#include<stdio.h>
int main()
{
    system("cls");
    int n,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int c[n];
    for(int i=0; i<n; i++)
    {
        int k=0;
        for(int j=i; j<(n-i); j++)
        {
            c[j-i]=a[j];
            k++;
        }
        int sum=0;
        for(int s=0; s<k; s++)
        {
            sum=sum+c[s];
        }
        if(sum!=0)
        d++;
    }
    int p[n];
    for(int i=(n-2); i>0; i--)
    {
        int k=0;
        for(int j=i; j>0; j--)
        {
            p[i-j]=a[j];
            k++;
        }
        int sum=0;
        for(int s=0; s<k; k++)
        {
            sum=sum+p[s];
        }
        if(sum!=0)
        d++;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        d++;
    }
    printf("%d",d);
    return 0;
}