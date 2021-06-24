//Note- Max element in array can be 126
//most optimised code

#include <stdio.h>

void find_sec_highest(char *);
int main(){
char arr[]={50,20,4,18,88,63,99,34,4};
//calling method
int i;
int len=sizeof(arr)/sizeof(char);
printf("Given array is ");
for(i=0;i<len;i++){
printf(" %d ",arr[i]);
}

find_sec_highest(arr);

return 0;
}

//
void find_sec_highest(char *p){

char max=0;
char smax;
while(*p){
if(*p > max) {
smax=max;
max=*p;


}
++p;
	}
printf("\nSecound highest number is %d ",smax);
}

#ifdef test1
Given array is  10  20  4  125  126  63  7  34  4 
Secound highest number is 125
#endif

#ifdef test2
Given array is  10  20  4  18  54  63  76  34  4 
Secound highest number is 63
#endif

#ifdef test3
Given array is  50  20  4  18  88  63  99  34  4 
Secound highest number is 88 
#endif
