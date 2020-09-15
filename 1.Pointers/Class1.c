#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int a, b;
    int *p, *q;
    p = &a;
    q = &b;

    a = 20;
    b = 30;
    printf("value of a is %d and b is %d\n", a, b);
    printf("value of p is %x and q is %x\n", p, q);
    printf("value of p is %u and q is %u\n", p, q);
    printf("value of p is %p and q is %p\n", p, q);
    printf("value of p is %d and q is %d\n", p, q);

    return 0;
}