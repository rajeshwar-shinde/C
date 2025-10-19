#include <stdio.h>
#include <stdlib.h>
int main(){
printf("Enter the input password : ");
char ch;
char str[10];
char *ptr;
ptr=str;

system("stty -echo");
while((ch=getchar())!='\n'){

printf("x");
 
*ptr=ch;
ptr++;

}
*ptr='\0';
system("stty echo");
printf("\nThe password typed is %s",str);


return 0;
}
