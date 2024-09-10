#include<stdio.h>

int main(){

    int a = 8;
    float b = 4.2;
    char c = 'f'; // it's compulsory to write character in single quats
    printf("%d, %f, %c \n", a,b,c);

    printf("size of int: %zu bytes\n", sizeof(int));
    printf("size of float: %zu bytes\n", sizeof(float));
    printf("size of char: %zu bytes\n", sizeof(char));

    return 0;
}