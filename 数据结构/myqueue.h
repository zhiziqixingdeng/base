#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
using namespace std;
struct myqueue{
	int data[99999];
	int head,rear;
	int end;
	void init(){
		head=1;
		rear=1;
	}
	int size(){
		return rear;
	}
	bool empty(){
		if(size()==0){
			return true;
		}
		else{
			return false;
		}
	}
  void push_head(int x){
		if(head==rear){
			return;
		}
		for(int i=head+1;i<=rear;i++){
			data[i]=data[i-1];
		}
		data[head]=x;
		return;
	}
	void push_back(int x){
		if(head==rear){
			return;
		}
		rear++;
		data[rear]=x;
		return;
	}
	void pop_head(){
		end=data[head];
		for(int i=head;i<=rear;i++){
			data[i]=data[i+1];
		}
		return;
	}
	void pop_back(){
		end=data[rear];
		for(int i=rear;i>=head;i--){
			data[i]=data[i-1];
		}
		return;
	}
	int front(){
		return data[head];
	}
	int back(){
		return data[rear];
	}
}que;
#endif
