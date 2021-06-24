#include <stdio.h>

int strcmp_(const char *str1,const char *str2){
while(*str1){

if(*str1!=*str2) return 1;
str1++;
str2++;

}
if(*str1 || *str2) return 1;
}


int main(){

char str1[]="Rajeshwar";
char str2[]="RAjeshwar";
strcmp_(str1,str2);
printf("str1=%s str2=%s , strcmp_  %d",str1,str2,strcmp_(str1,str2));
return 0;
}
