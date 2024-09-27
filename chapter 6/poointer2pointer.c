#include<stdio.h>

int main()
{
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *(&i));
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", **(&j));
    printf("the value of i is %d\n", **k);
    printf("the value of i is %d\n", ***(&k));
    // printf("the value of i is %d\n", **(&j));

    printf("the value of j is %p\n", &i);
    printf("the value of j is %p\n", j);
    printf("the value of j is %p\n", *(&j));
    printf("the value of j is %p\n", *k);
    printf("the value of j is %p\n", **(&k));

    // printf("the value of k is %p\n", &(&i));  // it is not correct but reverse is correct
    printf("the value of k is %p\n", &j);
    printf("the value of k is %p\n", k);

    return 0;
} 