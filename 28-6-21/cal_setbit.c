//THE PROGRAM CALCULATES SETBITS IN NUBERS

#define bitstat(v) v&1

#include <stdio.h>
int main(){
char count=0;
unsigned int v;
printf("Enter the value whose 1 bits are to be calculated\n");
scanf("%d",&v);
v=v>0?v:v*-1;
while(v){
count +=bitstat(v);
v=v>>1;

}

printf("setbits are %d",count);


return 0;
}

#ifdef out1
Enter the value whose 1 bits are to be calculated
12
setbits are 2
#endif

#ifdef out2
Enter the value whose 1 bits are to be calculated
0
setbits are 0
#endif

#ifdef out3

#endif
