#include <stdio.h>
#include <malloc.h>
struct Node{
int data;
struct Node *next;
};

int main(){
struct Node *head,*temp;

head=(struct Node *)malloc(sizeof(struct Node));
temp=(struct Node *)malloc(sizeof(struct Node));
head->data=10;
temp->data=20;

//appending temp before head and moving head to temp;

temp->next=head;
head=temp;
printf("\n%d ",head->data);
printf("%d",head->next->data);

return 0;
}
