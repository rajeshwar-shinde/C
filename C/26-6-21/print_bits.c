#include <stdio.h>
#include <time.h>
union  u{
int x;
char ch;
};

void method2(union u u1){
char c=0;
for(char i=15;i>=0;i--){
printf("%d",((u1.x>>i)&1)?1:0);
c++;
if(c==4){printf("\n");
c=0;
}

}
}


int main(){
union u u1;
u1.x=0x7890;

printf("Big_Indian__(0x7890)\n");
method2(u1);
return 0;
}
