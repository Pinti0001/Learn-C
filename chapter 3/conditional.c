#include<stdio.h>

int main()
{
    int marks ;
    printf("enter ur marks herer to find ur grade : ");
    scanf("%d",&marks);

    if(marks>90 && marks<=100) printf("your grade is A\n");

    else if(marks>80 && marks<=90) printf("ur grade is B\n");
    else if(marks>70 && marks<=80) printf("ur grade is C\n");
    else if(marks>60 && marks<=70) printf("ur grade is D\n");
    else if(marks>50 && marks<=60) printf("u are Pass\n");
    else printf("you are Fail 🥲\n");

    return 0;
}