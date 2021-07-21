//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
#define reset(a) memset(a, 0, sizeof(a));
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
vector<int> vt[1001];
vector<pair<int, int>> vtr;
int visited[1001];
int n, e, x, k;
int test;
void input(){
    cin >> n >> e >> x;
    int a, b;
    for (int i = 1; i <= e;i++){
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
}
void BFS(int u){
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 0; i < vt[u].size();i++){
            if(visited[vt[u][i]] == 0){
                q.push(vt[u][i]);
                vtr.push_back({u, vt[u][i]});
                visited[vt[u][i]] = 1;
                k++;
            }
        }
    }
}
void Spanning_tree(){
    BFS(x);
    for (int i = 1; i <= n; i++){
        if(visited[i] == 0){
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < vtr.size();i++){
        cout << vtr[i].first << " " << vtr[i].second << endl;
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        test++;
        reset(vt);
        vtr.clear();
        reset(visited);
        k = 1;
        input();
        // BFS(x);
        Spanning_tree();
    }
    return 0;
}