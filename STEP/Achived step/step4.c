#include <stdio.h>
#include <windows.h>
// 第一次尝试
//  int main(void)
//  {
//      SetConsoleOutputCP(65001);
//      int n, i;
//      double sum = 0;
//      printf("输入次数n=");
//      scanf("%d",&n);
//      for (i = 1; i <= n; i++)
//      {
//          double term = 1.0 / (i*2-1);
//          if (i % 2 !=0)
//          {
//              sum=sum + term;
//          }
//          else
//          {
//              sum = sum - term;
//          }
//      }
//      printf("和为%f", sum);

//         return 0;
// }
// 第二次优化
int main(void)
{
    SetConsoleOutputCP(65001);
    int i, n;
    double sum = 0, sign = 1;
    printf("输入次数n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + sign * 1.0 / (i * 2 - 1);
        sign = -sign;
    }
    printf("和为%f", sum);
    return 0;
}