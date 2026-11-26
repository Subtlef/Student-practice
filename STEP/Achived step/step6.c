#include <stdio.h>
int factorial(int n);
int main()
{
    int n,sum;
    scanf("%d", &n);
    sum=factorial(n);
    printf("%d", sum);

    return 0;
}
int factorial(int n)
{
    if (n==1)
    return 1;
    else
    return n*factorial(n-1);
}
