#include <stdio.h>

int main(){
char arr[]={20,20,40,40,13,13,88,88,98,99,11,11,13,15};
char len=sizeof(arr)/sizeof(char) -1;

for(char i=0;i<len;i++){
printf("%d ^ %d = %d \n",arr[i],arr[i+1],arr[i] ^ arr[i+1]);
i=i+1;
}

return 0;

}


#ifdef output
20 ^ 20 = 0 
40 ^ 40 = 0 
13 ^ 13 = 0 
88 ^ 88 = 0 
98 ^ 99 = 1 
11 ^ 11 = 0 
13 ^ 15 = 2 
#endif
