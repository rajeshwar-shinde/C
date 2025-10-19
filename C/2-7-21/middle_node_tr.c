#include <stdio.h>
#include <malloc.h>

typedef struct Node {
int data;
struct Node *next;

}N; 

N *head=NULL;
void createll(char);
void display();
void midtraverse(char);
//main

int main(){
char n;
int val;
printf("Enter how many nodes to insert -: ");
scanf("%hhd",&n);
createll(n);

printf("\nLinked list before :- ");
display();
midtraverse(n);

return 0;

}


//

void createll(char n){
int d;
N *temp,*new_;
while(n>0){
new_=(N*)malloc(sizeof(N));
scanf(" %d",&d);
new_->data=d;
if(!head){
head=new_;
temp=head;
}
else{
temp->next=new_;
temp=new_;
}
n = n-1;
}}

void midtraverse(char n){
N *t1,*t2;
t2=t1=head;

if(n&1 ==1){
while(t2->next!=NULL ){
t1=t1->next;
t2=t2->next->next;}}

else{
while(t2){
t1=t1->next;
t2=t2->next->next;
}}

printf("\nMiddle Element is :- %d",t1->data);


}




void display(){
N *temp;
temp=head;
while(temp){
printf("%d",temp->data);
temp=temp->next;
}}


#define out2
Enter how many nodes to insert -: 5
1 2 3 4 5

Linked list before :- 12345
Middle Element is :- 3
#endif




#define out1
Enter how many nodes to insert -: 4
1 2 3 4

Linked list before :- 1234
Middle Element is :- 3
#endif
