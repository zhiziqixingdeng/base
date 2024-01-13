#include <iostream>
using namespace std;
struct var{
    string name;
    int value;
}v[10000];
int ans;
string str;
string n;
int a;
int flag;
void f(n,a){
    for(int i=1;i<=ans;i++){
        if(v[i].name==n){
            v[i].value=a;
            return;
        }
    }
    cout<<"运行错误，未找到变量"<<endl;
    return;
}
void in(string x){
    for(int i=1;i<=ans;i++){
        if(x==v[i].name){
            cin>>v[i].value;
            return;
        }
    }
    cout<<"错误：不存在此变量"<<endl;
    return;
}
void add(string x,int a){
    for(int i=1;i<=ans;i++){
        if(x==v[i].name){
            v[i].value+=a;
            return;
        }
    }
    cout<<"错误:不存在此变量"<<endl;
}
void sub(){
    for(int i=1;i<=ans;i++){
        if(x==v[i].name){
            v[i].value-=a;
            return;
        }
    }
    cout<<"错误:不存在此变量"<<endl;
}
void z_if(){
    char x;
    string a,b;
    cin>>a>>x>>b;
    if(x=='='){
        if(a!=b){
            flag=1;
        }
    }
    else if(x=='<'){
        if(!(a<b)){
            flag=1;
        }
    }
    else if(x=="<"){
        if(!(a<b)){
            flag=1;
        }
    }
    else{
        cout<<"错误:逻辑符错误"<<endl;
    }
    return;
}
int main(){
    freopen("代码.txt","r",stdin);
    while(true){
        cin>>str;
        if(str=="}"){
            flag=0;
        }
        else if(flag==1){
            //阻拦if进程
        }
        else if(str=="var"){
           cin>>n;
           ans++;
           v[ans].name=n;
        }
        else if(str=="="){
            cin>>n>>a;
            f(n,a);
        }
        else if(str=="out"){
            cin>>n;
            if(n[0]==':'){
                for(int i=0;i<n.length()-1;i++){
                    n[i]=n[i+1];
                }
                for(int i=1;i<=ans;i++){
                    if(n==v[i].name){
                        cout<<v[i].value;
                    }
                }
            }
            else{
                cout<<n;
            }
        }
        else if(str=="endl"){
            cout<<endl;
        }
        else if(str=="in"){
            cin>>n;
            in(n);
        }
        else if(str=="+"){
            cin>>n>>a;
            add(n,a);
        }
        else if(str=="-"){
            cin>>n>>a;
            sub(n,a);
        }
        else if(str=="if"){
            z_if();
        }
    }
}