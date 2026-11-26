#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_range(int min, int max);
int main()
{
    srand(time(NULL));
    int a=rand();
    printf("%d",a);
    for (int i = 0; i < 5; i++)
    {
        int a=rand_range(1,100);
        printf("%d\n", a);
    }
    
}
int rand_range(int min, int max)
{
    return rand()%(max-min+1)+min;
}