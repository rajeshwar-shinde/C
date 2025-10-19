#include <stdio.h>
#include <malloc.h>
#include <string.h>
void *_memcpy(void *destination,void * source,size_t num){

memcpy(destination,source,num);

}

int main(){

void *p;
int a=10;
char ch[11];
char ch2[]="1334567890";

//p=&a;
//printf("%d  ",*(int*)p);
//p=&ch;
//printf("\n%c ",*(char*)p);
_memcpy(ch,ch2,11);
//ch[10]='\0';
printf("ch2 = %s\n",ch2);
printf("ch %s",ch);
printf("\nString CH2 copied to CH using void pointer successfully ");
return 0;
}

#ifdef output
ch2 = 1334567890
ch 1334567890
String CH2 copied to CH using void pointer successfully 
#endif 
