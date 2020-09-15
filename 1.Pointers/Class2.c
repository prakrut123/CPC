#include <stdio.h>

int main(int argc, char const *argv[])

{
    int a;
    
    float b;
    int c;
    float *q;
    double cc;
    int *p;
    q = &b;
    cc=9.9000000;

    p = &a;
    a = 100;
    b = 10.3;
    c=10;
    printf("a=%d| p = %u| *p = %d\n ", a, p, *p);
    printf("b=%f| q = %u| *q = %f\n ", b, q, *q);
    printf("c=%d| &c = %u| *(&c) = %d\n ",c, &c, *(&c));
    printf("int size %d cc size %d\n",sizeof(c),sizeof(cc));

    return 0;
}
