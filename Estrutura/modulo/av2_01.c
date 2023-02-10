#include <stdio.h>
int soma(int *a, int *b)
{
    printf("%d\n", *a);
    printf("%d\n", *b);
    *a = *a + *b;
    printf("%d\n", *a);
    return *a;
}
int main()
{
    int x = 5, y = 3;
    y = soma(&x, &y);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d", x + y);
    return 0;
}