#include <stdio.h>
#include <malloc.h>

typedef struct Node {
int data;
struct Node *next;

}N; 

N *head=NULL;
void createll(char);
void display();
void traverse_1_4th(char);
void traverse_3_4th(char );
//main

int main(){
char n;
int val;
printf("Enter how many nodes to insert -: ");
scanf("%hhd",&n);
if(n%4!=0){
printf("Enter the number which is multiple of 4");
return 0;
}
createll(n);

printf("\nLinked list before :- ");
display();
traverse_1_4th(n);
traverse_3_4th(n);

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

void traverse_1_4th(char n){
N *t1,*t2;
t1=head;
t2=t1->next->next->next;
while(t2->next!=NULL ){

if(t2->next->next->next->next) t2=t2->next->next->next->next;
else break;
t1=t1->next;}
printf("\n1/4th  Element is :- %d",t1->data);}


//

void traverse_3_4th(char n){
N *t1,*t2;
t1=head->next->next;
t2=t1->next;
while(t2->next!=NULL){

if(t2->next->next->next->next) t2=t2->next->next->next->next;
else break;
t1=t1->next->next->next;}
printf("\n3/4th  Element is :- %d",t1->data);}





void display(){
N *temp;
temp=head;
while(temp){
printf("%d",temp->data);
temp=temp->next;
}}

#ifdef output
//out1
Enter how many nodes to insert -: 12
1 2 3 4 5 6 7 8 9 10 11 12

Linked list before :- 123456789101112
1/4th  Element is :- 3
3/4th  Element is :- 9


//out2
Enter how many nodes to insert -: 8
1 2 3 4 5 6 7 8

Linked list before :- 12345678
1/4th  Element is :- 2
3/4th  Element is :- 6

//out3
Enter how many nodes to insert -: 4
1 2 3 4

Linked list before :- 1234
1/4th  Element is :- 1
3/4th  Element is :- 3

#endif
