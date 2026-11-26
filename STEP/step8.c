#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
void get_MaxMin(const int arr[], int len, int *max, int *min)
{
    int H, L, i;
    int H_1, L_1;
    if (len & 1)
    {
        H = L = arr[0];
        i = 1;
    }
    else
    {
        H = arr[0] < arr[1] ? arr[1] : arr[0];
        L = arr[0] > arr[1] ? arr[1] : arr[0];
        i = 2;
    }
    for (; i + 1 < len; i += 2)
    {
        H_1 = arr[i] > arr[i + 1] ? arr[i] : arr[i + 1];
        L_1 = arr[i] < arr[i + 1] ? arr[i] : arr[i + 1];
        if (H_1 > H)
            H = H_1;
        if (L_1 < L)
            L = L_1;
    }
    *max = H;
    *min = L;
}
int main()
{
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(int);
    srand(time(NULL));

    for (int i = 0; i < len; i++)
    {
        arr[i] = rand_number(0, 1000);
        printf("%d\n", arr[i]);
    }
    int max, min;
    get_MaxMin(arr, len, &max, &min);
    printf("max=%d, min=%d\n", max, min);
    return 0;
}