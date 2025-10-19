#include <stdio.h>
#include <string.h>
struct emp{

char name[20];
char age;
unsigned int id;

};

int main(){
struct emp e1= {"rajeshwar",23,109293010};
printf("%s %d %d\n",e1.name,e1.age,e1.id);

struct emp e2;
strcpy(e2.name,e1.name);
e2.id=e1.id;
e2.age=e1.age;
printf("%s %d %d\n",e2.name,e2.age,e2.id);

printf(" addresss of e1 %p\n",&e1);
printf(" addresss of e2 %p\n",&e2);


return 0;
}
