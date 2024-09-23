#include <stdio.h>

int fact(int);

int fact(int x)
{
    if (x == 0 || x == 1) // base condition  
    {
        return 1;
    }
    return fact(x - 1) * x;
}

int main()
{
    int a = 3;

    printf("The factorial of %d is %d\n", a, fact(a));

    return 0;
}