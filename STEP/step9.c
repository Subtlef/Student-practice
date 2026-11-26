#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int n, i;
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 0;
    n = strlen(s);
    while (n > 0 && (s[n - 1] == '\n' || s[n - 1] == '\r'))
        n--;
    for (i = n - 1; i >= 0; i--)
        putchar(s[i]);
    return 0;
}