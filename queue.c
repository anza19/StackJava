/*
 * queue.c
 *
 *  Created on: Dec 5, 2017
 *      Author: Anza
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*Queue fields*/
#define SIZE 10
int queArray[SIZE];
int front = 0;
int rear = -1;
int nItems = 0;

/*Queue functions*/

//checks the value at the top
int peek(){
	return(queArray[front]);
}

//checks if queue is empty
bool isEmpty(){
	return(nItems == 0);
}

//checks if queue is full
bool isFull(){
	return(nItems == SIZE);
}

//inserts a value at the rear
void insert(int data){
	if(rear == SIZE -1)
		rear = -1;
	queArray[++rear] = data;
	nItems++;
}

//removes a value from the front
int removeFromQueue(){
	int temp = queArray[front++];
	if(front == SIZE)
		front = 0;
	nItems--;
	return temp;
}

int main(){
	for(int i = 0;i<10;i++){
		insert(i);
	}
	while(!isEmpty()){
		int x = removeFromQueue();
		printf("QUEUE VALUES = %d \n",x);
	}
	return 0;
}
