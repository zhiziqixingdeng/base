#include <iostream>
#include <queue>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char tree[20][20];//可能会有数组越界问题
int n;
int cx[3]={0,1,1};
int cy[3]={0,1,-1};
struct p{
	int x,y;
};
queue<p> q;
void draw(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			if(tree[i][j]!='*'){
				cout<<' ';
			}
			else{
				cout<<tree[i][j];
			}
		}
		cout<<endl;
  }
  sleep(1);
  system("cls");
  return;
}
void bfs(int x,int y,int n){
	q.push({x,y});
	tree[x][y]='*';
	while(n--){
		draw();
		p head=q.front();
		for(int i=1;i<=2;i++){
			int xx=head.x+cx[i];
			int yy=head.y+cy[i];
			tree[xx][yy]='*';
			q.push({xx,yy});
		}
		q.pop();
	}
	return;
}
int main(){
	int n=rand()%6+1;
	n*=2;
	bfs(1,5,n);
	return 0;
}
