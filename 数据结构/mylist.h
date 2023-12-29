#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
using namespace std;
struct mylist{
	int value;
	int l,s;
}list[999999];
int in;
int cnt;
void init(int x){
	list[1].value=x;
	in=1;
	cnt++;
	return;
}
void to(char go){
	if(go=='l'){
		in=list[in].l;
	}
	else{
		in=list[in].s;
	}
	return;
}
int is(){
	return list[in].value;
}
void del(){
	list[in-1].l=list[in].l;
	list[in+1].s=list[in].s;
	in=1;
	return;
}
void add(int v){
	cnt++;
	list[cnt-1].l=cnt;
	list[cnt].s=cnt-1;
	list[cnt].value=v;
	return;
}
void A_add(int v,int x){
	cnt++;
	list[cnt].value=v;
	int flag=list[x].l;
	list[x].l=cnt;
	int flag2=list[flag].s;
	list[flag2].s=cnt;
	list[cnt].s=x;
	list[cnt].l=flag2;
	return;
}
void out(){
	int i=1;
	while(true){
		cout<<list[i].value<<endl;
		i=list[i].l;
		if(i==0){
			break;
		}
	}
	return;
}
#endif
