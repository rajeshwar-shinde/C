#include <stdio.h>

int strlen_(const char *str){
unsigned int len=0;
while(*str){
len++;
str++;
}
return len;

}


int main(){

char src[]="C programming";
printf("string is \"%s\" , length is %d ",src,strlen_(src));

return 0;
}
