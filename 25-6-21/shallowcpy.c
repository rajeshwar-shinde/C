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

struct emp *e2=&e1;
//strcpy(e2->name,"Kishan");
//e2->id=909098;
printf("%s %d %d\n",e1.name,e1.age,e1.id);

printf(" e1 pointing to address %p\n",e1.name);
printf(" e2 pointing to address %p\n",e2->name);

return 0;
}
