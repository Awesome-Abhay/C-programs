#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    system("cls"); 
    int p,r,t1,t2;
    scanf("%d %d",&p,&r);
    t1=p+((p*r*1)/100);
    t2=t1+((t1*r*1)/100);
    float ci=t2-p;
    printf("%f",ci);
    return 0;
}
