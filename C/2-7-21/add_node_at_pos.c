#include <stdio.h>
#include <malloc.h>

typedef struct Node {
int data;
struct Node *next;

}N; 

N *head=NULL;
void createll(char);
void insert_at_pos(char,char);
void display();
int main(){
N *head;
char n,val,pos;
printf("Enter how many nodes to insert in LL  - ");
scanf("%hhd",&n);
createll(n);


printf("\nEnter the position where you want to append node :- ");
scanf("%hhd",&pos);
if(pos>n){
printf("***Out of range***");
return 0;
}
printf("\nEnter the value :- ");
scanf("%hhd",&val);
insert_at_pos(pos,val);

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



void insert_at_pos(char n,char val){
N *new_;
new_=(N*)malloc(sizeof(N));
new_->data=val;
N *temp;
temp=head;
if(n==0){
new_->next=head;
head=new_;

}

else{
while(n-1 >0){
temp=temp->next;
n=n-1;
}
new_->next=temp->next;
temp->next=new_;
}}

void display(){

N *temp;
temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;

}

}




#ifdef out1
Enter how many nodes to insert in LL  - 5
1 2 3 4 5

Enter the position where you want to append node :- 0

Enter the value :- 9
912345
#endif

#ifdef out2
Enter how many nodes to insert in LL  - 5
1 2 3 4 5 

Enter the position where you want to append node :- 1

Enter the value :- 9
192345
#endif

#ifdef out3
Enter how many nodes to insert in LL  - 5
1 2 3 4 5

Enter the position where you want to append node :- 6
***Out of range***
#endif
