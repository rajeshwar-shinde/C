#include <stdio.h>
int main(){

char c[10];
printf("Enter the text :");
scanf("%s",c);
char *t;
t=c;

while(*t!='\0'){
printf("text %d : ascii ",*t);
for(char i=0;i<8;i++){

printf("%d",(*t>>i)&1);
}
t=t+1;
printf("\n");
}

return 0;
}


#ifdef out1
Enter the text :12A
text 49 : ascii 10001100
text 50 : ascii 01001100
text 65 : ascii 10000010
#endif

#ifdef out2
Enter the text :ABC
text 65 : ascii 10000010
text 66 : ascii 01000010
text 67 : ascii 11000010
#endif

#ifdef out3
Enter the text :fa
text 102 : ascii 01100110
text 97 : ascii 10000110
#endif
