#include<stdio.h>

int main()
{
    int n ;
    printf("entr ur n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n",n, i, n*i);
    }
    

    return 0;
}