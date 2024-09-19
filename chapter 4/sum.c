#include<stdio.h>

int main()
{
    int n = 10, res = 0, i = 0;
    while (i<=n)
    {
        res +=i;
        i++;
    }
    printf("%d", res);

    return 0;
}