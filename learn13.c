#include<stdio.h>
int main()
{
    system("cls");
    int a;
    long z;
    long double x;
    char c;
    float b;
    double d;
    printf("%1u\n",sizeof(a));
    printf("%1u\n",sizeof(c));
    printf("%1u\n",sizeof(b));
    printf("%1u\n",sizeof(d));
    printf("%1u\n",sizeof(z));
    printf("%1u\n",sizeof(x));
    return 0;
}

// or we can use %d also to get the size.