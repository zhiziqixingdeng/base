#ifndef CIRCLE_H
#define  CIRCLE_H
struct mrstack{
	int tall;
	int st[10000];
	void init(){
		tall=0;
	}
	void push(int x){
		tall++;
		st[tall]=x;
		return;
	}
	int top(){
		return st[tall];
	}
	void pop(){
		st[tall]=0;
		tall--;
		return;
	}
	int size(){
		return tall;
	}
	bool empty(){
		if(tall==0){
			return true;
		}
		else{
			return false;
		}
	}
}sta;
#endif
