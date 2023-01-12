// taking input 2d array from user and passing it through the function.
#include<stdio.h>
int input()
{
    int s;
    scanf("%d",&s);
    return s;
}
void inar(int s, int a[s][s])
{
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printar(int s, int a[s][s])
{
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    system("cls");
    int n;
    printf("enter the value of n:- ");
    n=input();
    int a[n][n];
    printf("give values to this array:- ");
    inar(n,a);
    printf("your 2D array is:- \n");
    printar(n,a);
    return 0;
}