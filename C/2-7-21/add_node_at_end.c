#include <stdio.h>
#include <malloc.h>

typedef struct Node {
int data;
struct Node *next;

}N; 

N *head=NULL;
void createll(char);
void insert_at_end(char);
void display();
int main(){
N *head;
char n,val,pos;
printf("Enter how many nodes to insert in LL  - ");
scanf("%hhd",&n);
createll(n);

printf("\nEnter the value :- ");
scanf("%hhd",&val);
insert_at_end(val);

display();

return 0;
}

void createll(char n){
int d;
N *temp,*new_;

while(n>0){
new_=(N*)malloc(sizeof(N));
scanf("%d",&d);
new_->data=d;
if(head==NULL){
head=new_;
temp=head;
}
else{
temp->next=new_;
temp=new_;
}
n = n-1;
}}



void insert_at_end(char val){
N *new_,*temp;
new_=(N*)malloc(sizeof(N));
new_->data=val;

temp=head;
while(temp->next!=NULL) temp=temp->next;
temp->next=new_;
}

void display(){

N *temp;
temp=head;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;

}

}




#ifdef out1
Enter how many nodes to insert in LL  - 5
1 2 3 4 5

Enter the value :- 6
1 2 3 4 5 6
#endif

#ifdef out2
Enter how many nodes to insert in LL  - 4
1 3 4 6

Enter the value :- 9
1 3 4 6 9
#endif

#ifdef out3
Enter how many nodes to insert in LL  - 3
1
5
7

Enter the value :- 0
1 5 7 0
#endif
