#define cal_even_odd(v) v&1

#include <stdio.h>
int main(){
int n;
printf("Enter the number\n");
scanf("%d",&n);
if(cal_even_odd(n)) printf("**ODD**");
else printf("**EVEN**");

return 0;
}

#ifdef out1
Enter the number
34
**EVEN**
#endif

#ifdef out2
Enter the number
121
**ODD**
#endif

#ifdef out3
Enter the number
-111
**ODD**
#endif

#ifdef out4
Enter the number
0
**EVEN**
#endif
