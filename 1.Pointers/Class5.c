/*C program to extract bytes from an integer (Hex) value.*/
 
#include <stdio.h>
 
typedef unsigned char BYTE;
 
int main(int argc, char const *argv[]){

    unsigned int value=300; //4 Bytes value
     
    BYTE a,b,c,d; //to store byte by byte value
     
     
    a=(value&0xFF); //extract first byte
    b=((value>>8)&0xFF); //extract second byte
    c=((value>>16)&0xFF); //extract third byte
    d=((value>>24)&0xFF); //extract fourth byte
 
    printf("a= %02d\n",a);
    printf("b= %02d\n",b);
    printf("c= %02d\n",c);
    printf("d= %02d\n",d);
  
    return 0;
}