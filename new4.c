#include<stdio.h>
int main()
{
    system("cls");
    char ch, s[10],sen[100];
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");      // -----> This is the catch of this program.
    scanf("%[^\n]s",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}