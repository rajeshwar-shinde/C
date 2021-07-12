#include <stdio.h>
#include <malloc.h>
typedef struct Node {
char data;
struct Node *next;
}N;

void display(N *);

int main(){
N *head=NULL,*temp=NULL;


for(char i=0;i<5;i++){
N *d=(N *)malloc(sizeof(N));
d->data=i;
if(head==NULL){
head=d;
temp=head;
}
else{
temp->next=d;
temp=d;

}

}

temp=head;
printf("Original LinkedList is :- ");
while(temp){
printf("%d",temp->data);
temp=temp->next;

}
printf("\nAfter reversing LinkedList is :- ");

display(head);
return 0;
}

void display(N *temp){

if(temp==NULL) return;

//printf("%d",temp->data);
display(temp->next);
printf("%d",temp->data);

}


