#include <stdio.h>
int main(){

union{
int x;
char c[2];
}var;
var.x=1;
if(var.c[0]==1) printf("Little indian\n");
else printf("Big Indian");

return 0;
}
