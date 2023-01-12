// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;  i++)
    {
        for(int j=1; j<=i; j++)
        printf("* ");                       //                 |
        for(int j=n; j>i; j--)              //  another code:- V
        printf("  ");
        for(int j=i; j<n; j++)
        printf("  ");
        for(int j=1; j<=i; j++)
        printf("* ");
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
//     for(int i=1; i<=n;  i++)
//     {
//         for(int j=1; j<=i; j++)
//         printf("* ");
//         for(int j=1; j<=(2*n)-(2*i); j++)
//         printf("  ");
//         for(int j=1; j<=i; j++)
//         printf("* ");
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     system("cls");
//     int n;
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=(2*n); j++)
//         {
//             if(j<=i || j>(2*n)-i)
//             printf("* ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }