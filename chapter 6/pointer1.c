#include<stdio.h>

int main()
{
    int i = 1;
    // printf("the addres of %d \nin the hexadesimal formate: %p  \nin the decimal formate: %u \n", i, &i, &i);
    /// %u for unsingned means decimal address and %p for hexadecimal formate

    int* j = &i; // j is the addres of i 
    // printf("the address of i is: %d\n", j); 
    // printf("the address of i is: %d\n", &i);
    // printf("the address of i is: %u\n", j);
    // printf("the address of i is: %u\n", &i);  
    // printf("the address of i is: %p\n", j);
    // printf("the address of i is: %p\n", &i); 

    // // value of aaddress
    // printf("the value at address j is %d\n", *j);
    // printf("the value at address j is %d\n", *(&i));

    char c = 'a';
    char* add = &c;
    printf("the address of c is: %p\n", &c);
    printf("the address of c is: %p\n", add);
    printf("the address of c is: %u\n", &c);
    printf("the address of c is: %u\n", add);
    printf("the value at address add is %c\n", *add);
    printf("the value at address add is %c\n", *(&c));

    return 0;
}