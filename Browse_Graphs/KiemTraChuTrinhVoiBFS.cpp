//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int matrix[1001][1001];
int visited[1001];
int v, e;
void input(){
	reset(visited);
	reset(matrix);
	cin >> v >> e;
	for (int i = 1; i <= e;i++){
		int a, b;
		cin >> a >> b;
		matrix[a][b] = 1;
		matrix[b][a] = 1;
	}
}
int DFS(int u){
    visited[u] = 1;
    stack<int> st;
	int parent[v + 1];
	reset(parent);
	int k = u;
	parent[u] = 0;
	st.push(u);
	while(!st.empty()){
        u  = st.top();
        st.pop();
        for (int i = 1; i <= v;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                visited[i] = 1;
				st.push(u);
				parent[i] = u;
				st.push(i);
                break;
            }
			else if(visited[i] == 1 && i != parent[u] && matrix[u][i] == 1 && i == k){
				return 1;
			}	
        }
    }
	return 0;
}
string cycle(){
	for (int i = 1; i <= v;i++){
		if(DFS(i) == 1)
			return "YES";
		reset(visited);
	}
	return "NO";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		input();
		cout << cycle() << endl;
	}
	return 0;
}
