// program to check whether the character is vowel, consonant or not an alphabet.
#include <stdio.h>
int main() 
{
    system("cls");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch;
    scanf("%c",&ch);
    if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("Vowel.");
        else
            printf("Consonant.");
    }
    else
        printf("Not an alphabet.");
    return 0;
}
