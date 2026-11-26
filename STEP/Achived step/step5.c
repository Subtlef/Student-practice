#include <stdio.h>
#include <math.h>
#include <windows.h>
//习题2-14
// int main(void)
// {
//     SetConsoleOutputCP(65001);
//     printf("输入n=");
//     int n, i;
//     double reslute;
//     scanf("%d", &n);
//     for (i = 0; i <= n; i++)
//     {
//         reslute = pow(3, i);
//         printf("3^%d=%.0f\n", i, reslute);
//     }
//     return 0;
// }
//习题2-15
double fact(int n);
int main(void)
{
    SetConsoleOutputCP(65001);
    int m, n;
    printf("输入元素总数n=");
    scanf("%d",&n);
    printf("取出数m=");
    scanf("%d",&m);
    double reslute=fact(n)/(fact(m)*fact(n-m));
    printf("可能组合为%.0f个", reslute);
    return 0;
}
double fact(int n)
{
    int i;
    double reslute=1;
    for ( i = 1; i <= n; i++)
    {
        reslute=reslute*i;
    }
    return reslute;

}
