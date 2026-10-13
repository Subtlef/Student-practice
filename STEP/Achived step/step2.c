#include <stdio.h>
#include <stdlib.h> // 为了用 system()

int main(void)
{
    system("chcp 65001 > nul"); // 把终端切成 UTF-8
    double consume, fee;
    printf("用水量:");
    scanf("%lf", &consume);
    if (consume <= 15)
    {
        fee = 4 / consume;
    }
    else
    {
        fee = 2.5 * consume - 10.5;
    }
    printf("水费%.2f", fee);
    return 0;
}
 
    