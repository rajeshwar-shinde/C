#include <stdio.h>
#include <malloc.h>
typedef struct Node{
int data;
struct Node *next;
}N;

N *head=NULL;


int main(){
N *temp,*new_,*temp2;
char n;
printf("Enter the number of nodes :- ");
scanf("%hhd",&n);

while(n){

new_=(N *)malloc(sizeof(N));
scanf("%d",&new_->data);
if(head==NULL){
head=new_;
temp=head;
}

else{
temp->next=new_;
temp=new_;
}

n = n-1;
}
temp=head;
temp2=temp->next;
while(temp2->next!=NULL){
temp=temp->next;
temp2=temp2->next;
}
printf("\n 2nd Last Element is :- %d",temp->data);

return 0;
}
