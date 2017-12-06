/*includes*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*stack params*/
#define SIZE 8
int stackArray[SIZE];
int top = -1;

/*stack functions*/
bool isEmpty(){
	return(top == -1);
}

bool isFull(){
	return(top == SIZE);
}

int peek(){
	return(stackArray[top]);
}

void pushToStack(int data){
	if(!isFull()){
		stackArray[++top] = data;
	}else{
		printf("ERROR: STACK IS FULL.\n");
	}
}

int popFromStack(){
	if(!isEmpty()){
		int data = stackArray[top--];
		return data;
	}else{
		printf("ERROR: STACK IS EMPTY.\n");
		return -42;
	}
}

int main(){
	for(int i=0;i<10;i++){
		pushToStack(i);
	}
	while(!isEmpty()){
		int x = popFromStack();
		printf("Value from stack: %d \n",x);
	}
}
