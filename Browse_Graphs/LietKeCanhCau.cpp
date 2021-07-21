//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a, 0, sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int v, e;
int matrix[1001][1001];
vector<int> adj[1001];
int visited[1001];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size();i++){
            int x = adj[u][i];
            if(visited[x] == 0 && matrix[u][x]){
                visited[x] = 1;
                q.push(x);
                // cout << "(" << u << " " << x << ")";
            }
        }
    }
    // cout << endl;
}
int components(){
    int k = 0;
    for (int i = 1; i <= v;i++){
        if(visited[i] == 0){
            return 1;
        }
    }
    return 0;
}
void bridge_edge(){
    reset(visited);
    for (int i = 1; i <= v;i++){
        for (int j = 0; j < adj[i].size();j++){
            int x = adj[i][j];
            if(x > i){
                matrix[i][x] = 0;
                matrix[x][i] = 0;
                BFS(1);
                int cpn = components();
                
                if (cpn == 1){
                    cout << i << " " << x << " ";
                }
                matrix[x][i] = 1;
                matrix[i][x] = 1;
                reset(visited);
            }
        }
    }
}
void input(){
    for (int i = 0; i < 1001;i++){
        adj[i].clear();
    }
    reset(visited);
    cin >> v >> e;
    int a, b;
    for (int i = 1; i <= e;i++){
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
        bridge_edge();
        cout << endl;
    }
}