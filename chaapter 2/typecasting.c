#include<stdio.h>

int main()
{
    int a = 45;
    float b = 33.45;
    
    printf("initial value of a is %d\n", a);

    a = (int) b;
    printf("final value of a is %d\n", a);

    return 0;
}