#include <stdio.h>
int main(){
printf("Enter the hex value 0x");
unsigned char hex;
char *p;
p=&hex;
scanf("%hhx",&hex);
for(char i=0;i<8;i++){
printf("%d ",(*p>>i)&1);
}
printf("\n0x%x Big Endian ",hex);
return 0;
}


#ifdef out1
Enter the hex value 0x12
0 1 0 0 1 0 0 0 
0x12 Big Endian 
#endif

#ifdef out2
Enter the hex value 0xff
1 1 1 1 1 1 1 1 
0xff Big Endian 
#endif

#ifdef out3
Enter the hex value 0xFF
1 1 1 1 1 1 1 1 
0xff Big Endian
#endif
