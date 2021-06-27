#include <stdio.h>
#define find_bit_by_pos(p,n)  p=(p & (1<<n))!=0?1:0

int main(){
int x=7;
int n=2;
printf("%d",find_bit_by_pos(x,n));


return 0;
}
