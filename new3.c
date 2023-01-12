// experiment on scanning and printing of character.
#include<stdio.h>
int main()
{
    system("cls");
    char ch;
    char s[10];
    char sen[100];
    scanf("%c",&ch);
    // scanf("\n");
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]s",&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;

}