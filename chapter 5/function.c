#include <stdio.h>

// Function Prototype
int sum(int, int);

// // Function defination
// int sum(int x, int y)
// {
//     printf("the sum is: %d\n", x + y);

//     return x + y;
// }

int main()
{
    // int a = 1;
    // int b = 2;
    // sum(a,b);

    // int a1 = 4;n
    // int b1 = 1 ;
    // sum(a1, b1);

    int a2 = 3;
    int b2 = 4;
    int c2 = sum(a2, b2);
    printf("the sum of c2 is %D\n", c2);

    return 0;
}


// Function defination
int sum(int x, int y)
{
    printf("the sum is: %d\n", x + y);

    return x + y;
}