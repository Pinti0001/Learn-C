
#include <stdio.h>

int main()
{
    int a = 9;
    int b = 4;
    float r = a/b;
    // int/int = int
    printf("the modulas of a and b is %d and a/b = %d and r = %f\n", a % b,a/b, r);
    // int with float = float
    // float with float = float
    float c = 9;
    int d = 4;
    printf("the modulas of c and d is can't do and c/d = %f\n", c/d);

    int e = 6.6;
    printf("the value of e is %d \n", e);

    printf("intraction with associate opratores => \n a*b/d = %d\n a/b*d = %d\n a*d/b = %d\n", a*b/d, a/b*d, a*d/b);

    return 0;
}