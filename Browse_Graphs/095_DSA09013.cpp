/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  LIỆT KÊ CẠNH CẦU VỚI BFS
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
demo
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int matrix[1001][1001];
bool visited[1001];
void BFS(int v, int n, int u){
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        cout << u << " ";
        q.pop();
        for (int i = 1; i <= v;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
void input(int n){
    int u, v;
    for (int i = 1; i <= n;i++){
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int u, v, n;
        memset(visited, 0, sizeof(visited));
        memset(matrix, 0, sizeof(matrix));
        cin >> v >> n >> u;
        input(n);
        BFS(v, n, u);
        cout << endl;
    }
    return 0;
}