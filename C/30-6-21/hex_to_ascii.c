#include <stdio.h>
int main(){
int hex=0xff;

//Shortcut solution
//printf("%d",hex);

//proper
int sum=0,pow=1;
while(hex){
sum += pow*(hex&1);
pow=pow*2;
hex=hex>>1;
}

printf("%d",sum);

return 0;
}
