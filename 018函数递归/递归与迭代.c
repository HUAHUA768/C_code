#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    double x = 0;
    int n = 0;
    scanf("%lf %d", &x, &n);
    int i = 0;
    double put;
    for (i = 1; i <= n; i++)
    {
        char a = getchar();
        
        scanf("%lf", &put);
        if (a == '-')
        {
            x = x - put;
        }
        else {
            x = x + put;
        }
    }
    printf("%lf", put);
    system("pause");
    return 0;
}