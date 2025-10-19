#include <stdio.h>
int func(char[],char);
int max(char,char);
int main(){

char arr[]={1,-7,-2,2,6,4,-11,1,10};
char n=sizeof(arr)/sizeof(arr[0]);
int i;
printf("The given array is : ");
for(int i=0;i<n;i++){
printf(" %d ",arr[i]);
}

int sum=func(arr,n);
printf("\nThe maximum sum of contiguous array is %d ",sum);


return 0;


}

int func(char arr[],char n){

char maxsum=0,tempsum=0,i;

for(i=0;i<n;i++){
tempsum += arr[i];
tempsum = max(tempsum,0);
maxsum = max(maxsum,tempsum);
}

return maxsum;

}

inline int max(char a,char b){

return a>b?a:b;

}
#ifdef test1
The given array is :  -2  1  -3  4  -1  2  1  -5  4 
The maximum sum of contiguous array is 6 
#endif

#ifdef test2
The given array is :  -3  3  7  -2  -6  4  -1  3  4 
The maximum sum of contiguous array is 12 
#endif

#ifdef test3
The given array is :  1  -7  -2  2  6  4  -11  1  10 
The maximum sum of contiguous array is 12 
#endif
