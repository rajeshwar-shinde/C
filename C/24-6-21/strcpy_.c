#include <stdio.h>

char *strncpy_(char *dest,const char *src,size_t n){

while(n>0){
*dest=*src;
dest++;
src++;
n--;

}
*dest='\0';
}


int main(){

char src[]="C programming ";
char dest[20];
int n=20; //Number of characters to be copied
strncpy_(dest,src,n);
printf("source \"%s\" \n",src);
printf("destination \"%s\" ",dest);

return 0;
}
