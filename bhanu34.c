#include <stdio.h>
int main()
{
    system("cls");
    char character, word[100], sentence[100];
    scanf("%c", &character);
    scanf("%s", word);
    scanf("\n"); // use this or give space separated input.
    scanf("%[^\n]s", sentence);
    printf("%c\n", character);
    printf("%s\n", word);
    printf("%s", sentence);
    return 0;
}