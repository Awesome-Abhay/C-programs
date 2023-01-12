// program to print the charges of vehicles for parking(Btech hons. exam 1st sem.)
#include<stdio.h>
int main()
{
    system("cls");
    char vtype;
    int n,charges;
    printf("enter the type of vehicle:- ");
    scanf("%c",&vtype);
    printf("enter the number of hours:- ");
    scanf("%d",&n);
    if(vtype=='t' || vtype=='b')
    {
        charges=n*100;
        printf("%drs.",charges);
    }
    else if(vtype=='c')
    {
        charges=n*40;
        printf("%drs.",charges);
    }
    else if(vtype=='m')
    {
        charges=n*10;
        printf("%drs.",charges);
    }
    else
    printf("this vehicle is not allowed");
    return 0;
}