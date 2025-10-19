#include <stdio.h>
#include <stdio.h>
  
#define setBit(n,k) n = (n | (1 << (k - 1)))
#define clearBit(n,k) n = (n & (~(1 << (k - 1))))
#define toggleBit(n,k) n = (n ^ (1 << (k - 1)))

#if 0
int setBit(int n, int k)
{
    return (n | (1 << (k - 1)));
}
  

int clearBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}

int toggleBit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}

#endif

int main(){
int val=7;
printf("Original value 0x%x \n",val);

int bitnum=2;
val=clearBit(val,bitnum);
printf("After clearing bit %d , value is 0x%x",bitnum,val); 
val=setBit(val,bitnum);
printf("\nAfter setting bit %d ,value is 0x%x",bitnum,val);

val=toggleBit(val,bitnum);
printf("\nAfter toggling bit %d ,value is 0x%x",bitnum,val);

return 0;
}
