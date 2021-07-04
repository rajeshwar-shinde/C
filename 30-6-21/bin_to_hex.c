#include <stdio.h>

int main(){
long int binval;
int rem=0,hex=0,i=1;
printf("Enter the binary : ");
scanf("%ld",&binval);
while(binval!=0){
rem=binval%10;
hex=hex +rem*i;
i=i*2;
binval=binval/10;
}
printf("%x",hex);
return 0;
}

