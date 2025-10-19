#include <stdio.h>
int main(){
char arr[]={128,3,127,6,76,54};
char *p;

int j=0,times;
printf("Before left rotation  { } : ");
for(j=0;j<6;j++) printf("%d ",arr[j]);
printf("\nHow many times rotate left: ");
scanf("%d",&times);
for(j=0;j<times;j++){
char temp=arr[0];
int i=0;
p=arr;
p++;
while(*p){
arr[i++]=*p;
p++;

}
arr[5]=temp;

}



printf("\nAfter left rotation { } : ");


for(j=0;j<6;j++) printf("%d ",arr[j]);

return 0;
}

#ifdef test1
Before left rotation  { } : -128 3 127 6 76 54 
How many times rotate left: 3

After left rotation { } : 6 76 54 -128 3 127 
#endif

#ifdef test2
Before left rotation  { } : -128 3 127 6 76 54 
How many times rotate left: 1

After left rotation { } : 3 127 6 76 54 -128
#endif

#ifdef test3
Before left rotation  { } : -128 3 127 6 76 54 
How many times rotate left: 2

After left rotation { } : 127 6 76 54 -128 3 
#endif
