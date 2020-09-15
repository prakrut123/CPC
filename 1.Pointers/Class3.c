#include <stdio.h>

int main(int argc, char const *argv[])

{
    char c, *cc;
    int a, *aa;
    float b, *bb;
    double d, *dd;
    unsigned char byte;
    aa = &a;
    cc = &c;
    bb = &b;
    dd = &d;
    c = 'a';
    a = 20000;
    b = 10.5;
    d = 999.9998;
    byte = *((unsigned char *)&a + 1);
    printf("SIZES \n");
    printf("int = %d | float = %d | char = %d | double = %d | pointers = %d \n", sizeof(int), sizeof(float), sizeof(char), sizeof(double), sizeof(cc));
    printf("VALUES\n");
    printf("c=%c | a=%d | b= %f | d= %lf\n", c, a, b, d);
    printf("ADDRESSES / POINTERS : \n");
    printf("cc=%u | aa=%u | bb=%u | dd=%u \n", cc, aa, bb, dd);
    printf("1st byte of a= %d \n", *aa);
    printf("byte =%u ", byte);
    return 0;
}
