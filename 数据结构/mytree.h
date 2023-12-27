#ifndef CIRCLE_H
#define  CIRCLE_H
struct tree{
	int z;
	int l,s;
}t[100000];
//0代表没有
int in=1;
void init(int x){
	t[1].z=x;
}
void to(char x){
	if(x=='l'){
		in=t[in].l;
	}
	else{
		in=t[in].s;
	}
}
int have(){
	return t[in].z;
}
void add(int x,char to,int value,int place){
	if(to=='l'){
		t[x].l=place;
		t[t[x].l].z=value;
	}
	else{
		t[x].s=place;
		t[t[x].s].z=value;
	}
	return;
}
bool empty(){
	if(t[1].l==0&&t[1].s==0){
		return true;
	}
	else{
		return false;
	}
}
void del(int x,int y,char to){//此函数可能造出森林
	if(to=='l'){
		t[y].z=0;
		t[y].l=0;
		t[y].s=0;
		t[x].l=0;
	}
	else{
		t[y].z=0;
		t[y].l=0;
		t[y].s=0;
		t[x].s=0;
	}
	return;
}
int to_tree(int x){
	return t[x].z;
}
#endif
