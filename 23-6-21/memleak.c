#include <stdio.h>
#include <malloc.h>
#include <string.h>


void problem1(){
char *b,*temp;


b=(char *)malloc(10);
*b='z';
temp=b;
printf("%u\n b[%d] \n",b,0);

for(int i=1;i<10;i++){
b=(char *)malloc(9);
*b='a';

printf("%u\n b[%d] \n",b,i);
}
printf("\nB end before freeing %u ",b);
//free(b);
printf("\ntemp pointing to B at beginning address %u of B memory, 9 memories wasted one freed ",temp);
printf("\ntemp points to value [%c] of b at beginning address ",*temp);
}


/*
void problem2(){
char *b,*c;
b=(char *)malloc(100);
c=b;
printf("b address before freeing %u\n",b);
free(b);
printf("b is freed now\n");
strcpy(c,"hello");
printf("c pointing to b value  %s\n",c);
printf("c pointing to b address %u\n",c);
printf("***Memory leak***");
}
*/

/*
void problem3(){
char* string = malloc(5 * sizeof(char)); //LEAK: not freed!

}
*/




int main(){

problem1();

//problem2();
//problem3();

return 0;
}
