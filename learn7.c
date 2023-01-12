// use of while and do while loop

#include <stdio.h>
int main()
{
    system("cls");
    int i;
    printf("enter the value of i:-");
    scanf("%d", &i);
    while(i<=5){
        printf("%d\n",i);
        i++;
    }                       

    return 0;
}
/* do {
    printf("%d\n",i);
    i++;
}
while(i<=5);
} */