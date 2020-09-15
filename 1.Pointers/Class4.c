#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    a = 3;
    b = 1;

    printf(" %d << %d =%d\n", a, b, a<<b);
    printf(" %d >> %d =%d\n", a, b, a>>b);

    return 0;
}
