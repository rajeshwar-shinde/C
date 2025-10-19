#include <stdio.h>
# define CUBE(b) b*b*b

static inline int cube(int a){
return a*a*a;
}

int main(){
printf("CUBE USING MACRO %d",CUBE(1+3));
printf("\nCUBE USING INLINE %d",cube(1+3));

return 0;
}
