#include<stdio.h>
#include<stdlib.h>

//define node structure
struct Node{
int data;
struct Node*next;
};

 struct Node*top=NULL;
//push operation
void push(int value){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
if(newNode==NULL){
    printf("stack overflow(memory not available\n");
    return;
}
newNode->data=value;
newNode->next=top;
top=newNode;
printf("%d pushed to stack\n",value);
}

//pop operation
void pop(){
if(top==NULL){
    printf("stack underflow(empty stack)\n");
    return;
}
struct Node*temp=top;
printf("%d popped from stack\n",top->data);
top=top->next;
free(temp);
}
//peek operation
void peek(){
if(top==NULL){
    printf("stack is empty\n");
}else{
printf("Top element is: %d\n",top->data);
}
}
//display stack
void display(){
if(top==NULL){
    printf("Stack is empty\n");
    return;
}
struct Node*temp=top;
printf("Stack elements:");
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL\n");
}
// Main function
int main(){
int choice,value;
while(1){
    printf("\n---Stack Menu---\n");
    printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
case 1:
    printf("Enter value:");
    scanf("%d",&value);
    push(value);
    break;
case 2:
    pop();
    break;
case 3:
    peek();
    break;
case 4:
    display;
    break;
case 5:
    exit(0);
default:
    printf("Invalid choice\n");
    }
}
return 0;
}
