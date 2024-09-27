#include<stdio.h>

void swapbyvalue(int, int);
void swapbyref(int*, int*);

void swapbyvalue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    // return x+y;
}
void swapbyref(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    // return x+y;
}

int main()
{
    int a = 5, b = 6, p = 1, q = 0;
    swapbyvalue(a,b);
    swapbyref(&p, &q);

    printf("the value of a is: %d\nthe vaue of b is: %d\n", a,b);
    printf("the value of p is: %d\nthe vaue of q is: %d\n", p,q);

    return 0;
}