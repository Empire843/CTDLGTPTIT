//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001][1001];
int visited[1001];
int v, e;
// void DFS(int u){
//     visited[u] = 1;
//     stack<int> st;
//     st.push(u);
//     // cout << "\n";
//     // cout << u << "(" << 0 << ") ";
//     while(!st.empty()){
//         u  = st.top();
//         st.pop();
//         for (int i = 1; i <= v;i++){
//             if(a[u][i] == 1 && visited[i] == 0){
//                 visited[i] = 1;
//                 st.push(u);
//                 st.push(i);
//                 // cout << i << "(" << u << ") ";
//                 break;
//             }
//         }
//     }
//     // cout << "}";
//     // cout << endl;
// }
void BFS(int u){
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 1; i <= v;i++){
            if(visited[i] == 0 && a[u][i] == 1){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
int components(){
    for (int i = 1; i <= v;i++){
        if(visited[i] == 0){
            return 1;
        }
    }
    return 0;
}
void cut_vertex(){
    reset(visited);
    for (int i = 1; i <= v;i++){
        visited[i] = 1;
        if(i == 1)
            BFS(2); //DFS(2);
        else
            BFS(1); //DFS(1);
        if(components()){
            cout << i << " ";
        }
        reset(visited);
    }
    cout << endl;
}
void input(){
    reset(visited);
    reset(a);
    cin >> v >> e;
    int x, y;
    for (int i = 1; i <= e;i++){
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
        cut_vertex();
    }
}