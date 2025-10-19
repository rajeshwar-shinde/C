#include <stdio.h>
#define bitstat(v)  v & 1
int main(){
printf("2^n = ");
unsigned int num;
char count=0;
scanf("%d",&num);

while(num){
if(num & 1) count+=1;
num=num>>1; 
}

if(count==1) printf("YES IT'S A POWER OF 2");
else printf("NO");
return 0;	}


#ifdef out1
2^n = 4
YES IT'S A POWER OF 2
#endif

#ifdef out2
2^n = 10
NO
#endif

#ifdef out3
2^n = 32
YES IT'S A POWER OF 2
#endif
