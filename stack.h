#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
#define MAX 1000
struct STACK{
	int arr[MAX];
	int topidx=-1;
	// Push an element into the stack
	void push(int val){
		if(isfull()){
			cout<<"stack overflow\n";
			return;
		}
		arr[++topidx]=val;
	}
	// Pop the top element
	int pop(){
		if(isempty()){
			cout<<"stack underflow\n";
			return -1;
		}
		return arr[topidx--];
	}
	// Peek at the top element
	int peek(){
		if(isempty()){
			cout<<"stack is empty\n";
			return -1;
		}
		return arr[topidx];
	}
	// Check if the stack is empty
	bool isempty(){
		return topidx==-1;
	}
	// Check if the stack is full
	bool isfull(){
		return topidx==MAX - 1;
	}
	// Display all elements
	void display() {
		if (isempty()){
			cout<<"stack underflow\n";
			return;
		}
		for(int i=topidx;i>=0;i--){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
};
#endif
