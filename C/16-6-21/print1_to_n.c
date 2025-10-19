#include <stdio.h>
int recur(int);
int main(){

int a;
printf("Enter the number : ");
scanf("%d",&a);

recur(a);


}

int recur(int a){

if(a==0) return 1;
recur(a-1);

printf("%d",a);

}
