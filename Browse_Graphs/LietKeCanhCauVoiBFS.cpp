//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int visited[1001];
int v, e, k;
void BFS(int u);
void input(){
    v = 0, e = 0, k = 0;
    memset(visited, 0, sizeof(visited));
    cin >> v >> e;
    int a, b;
    for (int i = 0; i < e;i++){
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
}
// void BFS(int u){
//     queue<int> q;
//     q.push(u);
//     visited[u] = 1;
//     while(!q.empty()){
//         u = q.front();
//         q.pop();
//         for (int i = 1; i <= v;i++){
//             if(matrix[u][i] == 1 && visited[i] == 0){
//                 visited[i] = 1;
//                 q.push(i);
//             }
//         }
//     }
// }
vector<int> vt[1001];
void BFS(int u){
    queue<int> q;
    visited[u] = 1;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 0; i < vt[u].size();i++){
            if(visited[vt[u][i]] == 0){
                q.push(vt[u][i]);
                visited[vt[u][i]] = 1;
            }
        }
    }
}
int components(){
    for (int i = 1; i <= v;i++){
        if(visited[i] == 0){
            BFS(i);
            k++;
        }
    }
    return k;
}
void bridge_edge(){
    reset(visited);
    for (int i = 1; i < v;i++){
        for (int j = i + 1; j <= v;j++){
            if(matrix[i][j] == 1){
                matrix[i][j] = 0;
                matrix[j][i] = 0;
                BFS(1);
                if(components() ){
                    cout << i << " " << j << " ";
                }
                matrix[i][j] = 1;
                matrix[j][i] = 1;
                reset(visited);
            }
        }
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
        bridge();
    }
}