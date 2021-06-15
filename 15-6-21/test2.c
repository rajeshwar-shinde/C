#include <stdio.h>
int main(){
int a,b;
a=2;
b=1;

int x=(a++&&(!b)&& b||++a);
printf("%d",x);

return 0;
}
