//note:-max array value 126
//most optimised code
#include <stdio.h>
int main(){
char arr[]={1,4,3,4,5,6,7};

printf("Given array is ");

char *p;
p=arr;
while(*p){
printf(" %d ",*p);
p++;

}

p=arr;


while(*p < *(p+1)){
p++; 
 }
if(*p==7) printf("\nAscending order array ");
else printf("\nNot Ascending order array ");

return 0;
}

#ifdef test1
Given array is  1  2  6  4  5  3 
Not ascending order array
#endif

#ifdef test2
Given array is  1  2  3  4  5  6 
Ascending order array 
#endif

#ifdef test3
Given array is  1  4  3  4  5  6  7 
Not Ascending order array 
#endif
