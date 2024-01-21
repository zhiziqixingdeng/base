#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <queue>
using namespace std;
struct p{
	int x,y;
};
queue<p> q;
int a,b,c,d;
int cx[5]={0,-1,1,0,0};
int cy[5]={0,0,0,1,-1};
int world[11][11];
void draw(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cout<<world[i][j]<<" ";
		}
		cout<<endl;
	}
	return;
}
void bfs(int x,int y){
	q.push({x,y});
	world[x][y]=1;
	while(q.empty()==false){
		draw();
		sleep(1);
		system("cls");
		p head=q.front();
		for(int i=1;i<=4;i++){
			int xx=head.x+cx[i];
			int yy=head.y+cy[i];
			if(xx>=a&&xx<=c&&yy>=b&&yy<=d&&world[xx][yy]==0){
				world[xx][yy]=1;
				q.push({xx,yy});
			}
		}
		q.pop();
	}
	return;
}
int main(){
	cin>>a>>b>>c>>d;
	bfs(a,b);
	return 0;
}
