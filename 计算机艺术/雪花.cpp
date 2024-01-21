#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char a[21][21];
void draw(){
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20;j++){
			if(a[i][j]!='*'){
				cout<<'t';
			}
			else{
				cout<<'*';
			}
		}
		cout<<endl;
	}
	sleep(1);
	system("cls");
	return;
}
void dfs(int x,int y,int n){
	if(n>=1&&a[x][y]!='*'){
		a[x][y]='*';
		draw();
		dfs(x+1,y,n-1);
		dfs(x-1,y,n-1);
		dfs(x,y+1,n-1);
		dfs(x,y-1,n-1);
	}
	return;
}
int main(){
	int n;
	cin>>n;
	dfs(10,10,n);
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20;j++){
			if(a[i][j]!='*'){
				cout<<'t';
			}
			else{
				cout<<'*';
			}
		}
		cout<<endl;
	}
	return 0;
}
