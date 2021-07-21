#include<bits/stdc++.h>
using namespace std;
int a,b,dem[1005];
bool chuaxet[1005];
vector<int> ke[1005];
void init(){
	for(int i=0;i<1001;i++){
		ke[i].clear();
		chuaxet[i]=true;
		dem[i]={0};
	}
}

void BFS(int u){
    queue<int> k;
    k.push(u);
    chuaxet[u]=false;
    while(!k.empty()){
        int top=k.front();
        k.pop();
        for(int i=0;i<ke[top].size();i++){
            if(chuaxet[ke[top][i]]){
            	chuaxet[ke[top][i]]=false;
                k.push(ke[top][i]);
            }
        }
    }
}
int TPLT(){
	int soTPLT=0;
	for(int i=1;i<=a;i++){
		if(chuaxet[i]){
			soTPLT++;
			BFS(i);
		}
	}
	return soTPLT;
}
void check(){
	int tmp1=0,tmp2=0,tmp3=0;
	for(int i=1;i<=a;i++){
		int x=ke[i].size();
		if(dem[i]%x!=0||dem[i]!=x*2){
			cout<<"0";return;
		}
	}
	cout<<"1";
}
int main(){
	int T;cin>>T;
	while(T--){
		cin>>a>>b;
		init();
		for(int i=0;i<b;i++){
			int u,v;
			cin>>u>>v;
			dem[u]++;
			dem[v]++;
			ke[u].push_back(v);
			//ke[u].push_back(v);
		}
		if(TPLT()!=1) cout<<0;
		else{
			check();
		}
		cout<<endl;
	}
	return 0;
}