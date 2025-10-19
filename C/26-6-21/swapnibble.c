#include <stdio.h>

int main(){
char ch='M';
printf("Before swapping the nibble\n");
for(char i=7;i>=0;i--){
printf("%d",((ch>>i)&1?1:0));
}

ch=(ch>>4)|(ch<<4);
printf("\nAfter swapping the nibble\n");
for(char i=7;i>=0;i--){
printf("%d",((ch>>i)&1?1:0));
}
printf("\n");
return 0;
}
