#include <stdio.h>
int main(){

int a;
printf("Enter the number");
scanf("%d",&a);

int sum=0;

while(a>0){


sum += a%10;
a=a/10;


}

printf("sum is %d",sum);

return 0;
}
