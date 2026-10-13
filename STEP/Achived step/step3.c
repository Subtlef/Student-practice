#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system("chcp 65001 > nul");
    int n, sum = 0, i;
    printf("输入n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("和为%d", sum);
    return 0;
}