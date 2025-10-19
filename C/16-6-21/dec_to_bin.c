
#include <stdio.h>

int recur(int);

int main(){

int d;
printf("Enter the decimal : ");
scanf("%d",&d);

printf("%d",recur(d));

return 0;

}

int recur (int d){

if(d==0) return 0;

else return (d%2 + 10 * recur(d/2));

}

