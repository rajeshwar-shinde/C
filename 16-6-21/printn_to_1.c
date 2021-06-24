#include<stdio.h>
int recur(int);
int main(){

printf("Enter the number : ");
int n;
scanf("%d",&n);

recur(n);


return 0;
}

int recur(int n){

if(n==0){
return 0;
}

printf("%d",n);

recur(n-1);

return 0;

}
