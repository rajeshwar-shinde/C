#include <stdio.h>

void swap(char **str1,char **str2){
char *temp=*str1;
*str1=*str2;
*str2=temp;

}

int main(){

char *str1="Rajeshwar ";
char *str2="Shinde ";
printf("str1= %s str2=%s Before swap\n",str1,str2);
swap(&str1,&str2);
printf("str1= %s str2=%s After swap\n",str1,str2);



return 0;
}
