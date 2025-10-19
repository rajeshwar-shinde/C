#include <stdio.h>
int main(){
union{
int x;
short sh;
char c[2];
char ch[4];
}var;

var.x=0x12345678;
printf("Given hex value is 0x%x \n",var.x);
//printf("0x%x 0x%x 0x%x\n",var.sh,var.c[0],var.c[1]);
printf("---Value and address of memory stored--- \n 0x%x %p 0x%x %p 0x%x %p  0x%x\n %p",var.ch[0],&var.ch[0],var.ch[1],&var.ch[1],var.ch[2],&var.ch[2],var.ch[3],&var.ch[3]);
if(var.c[0]==1) printf("little endian\n");
else printf("\nBig endian\n");


return 0;
}

#ifdef output
Given hex value is 0x12345678 
---Value and address of memory stored--- 
 0x78 0x7fff32fff2c4 0x56 0x7fff32fff2c5 0x34 0x7fff32fff2c6  0x12
 0x7fff32fff2c7
Big endian
#endif 
