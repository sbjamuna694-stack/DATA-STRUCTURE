#include<stdio.h>
#define MAX 5
int stack [MAX];
int top=-1;

//PUSH
void push(int value){
if(top==MAX-1)
    printf("stack overflow\n");
    else{
        top++;
        stack[top]=value;
        printf("%d pushed into stack\n",value);
    }

}
//Pop
void pop(){
if (top==-1)
    printf("stack underflow\n");
    else{
        printf("%d popped from stack\n",stack[top]);
        top--;
    }
}
void display(){
if (top==-1)
    printf("stack is empty\n");
    else{
       printf("stack elements are:\n");
    for(int i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}
}
int main(){
push(10);
push(20);
push(30);
display();
pop();
display();
return 0;
}
