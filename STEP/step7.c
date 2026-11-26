#include <stdio.h>
#include <stdlib.h>
int main()
{
    // 指针变量统一个字节数，64位为8字节，32为4.我为8字节。
    int a = 1;
    int *p = &a;
    printf("%d\n", sizeof(p));
    for (int i = 1; i <= 5; i++)
    {
        static int num;
        printf("%d\n", num++);
    }
    //请求和释放内存
    int *n = malloc(sizeof(int) * 10);
    int *m = (int *)calloc(10, sizeof(int));
    int *p_1 = (int *)realloc(m, 10 * sizeof(int));
    free(p_1);
}