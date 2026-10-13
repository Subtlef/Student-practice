#include <stdio.h>
#include <stdlib.h> // 新增：为了用 system()

int main(void)
{
     

    int a, b, max;

    printf("请输入 a：");
    scanf("%d", &a);
    printf("请输入 b：");
    scanf("%d", &b);

    if (a > b) 
        max = a;
    else
        max = b;

    printf("最大值是：%d\n", max);
    return 0;
}
