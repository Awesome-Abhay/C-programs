//     *    
//    ***   
//   *****  
//  ******* 
// *********
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {                                                                                  
            printf(" ");                          //                                       |
        }                                       //     another code for the same program:- V
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        for(int j=1; j<i; j++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     system("cls");
//     int n;
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=i; j<n; j++)
//         printf(" ");
//         for(int j=1; j<=(2*i)-1; j++)
//         printf("*");
//         printf("\n");
//     }
//     return 0;
// }