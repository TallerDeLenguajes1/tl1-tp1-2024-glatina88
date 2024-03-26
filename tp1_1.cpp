#include <stdio.h>

int main()
{
    int var1= 10;
    int *puntero= &var1;
    printf("%d\n", *puntero);
    printf("%d\n", puntero);
    printf("%d\n", &var1);
    printf("%d\n", &puntero);
    printf("%d\n", sizeof(var1));
    return 0;
}
