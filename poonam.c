#include<stdio.h>
int main()
{
    system("cls");
    float sub1, avg, percentage,n,total=0;
    printf("enter the number of subjects:- ");
    scanf("%f",&n);
    printf("the number of subjects are:- %f\n",n);
    printf("enter the marks of %f subjects:- ",n);
    for(int i=1; i<=n; i++)
    {
        scanf("%f",&sub1);
        total=total+sub1;
    }
    avg=(total)/n;
    percentage= (total/n);
    printf("total marks is:- %f\n",total);
    printf("the average marks is:- %f\n",avg);
    printf("the percentage is:- %f""%%",percentage);
    return 0;
}