#include<stdio.h>

int main()
{
    int n ;
    printf("entr ur numbere for factorial: ");
    scanf("%d",&n);
    int fac = 1;

    for(int i =n; i > 0; i--){
        fac *=i;
    }

    printf("factorial of %d is: %d\n",n,fac);

    return 0;
}