/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  ĐƯỜNG ĐI THEO BFS VỚI ĐỒ THỊ CÓ HƯỚNG
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int matrix[1001][1001];
bool visited[1001];
vector<int> vt;
int trace[1001];
void BFS(int v, int start, int end){
    visited[start] = 1;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for (int i = 1; i <= v;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                q.push(i);
                visited[i] = 1;
                trace[i] = u;
            }
        }
    }
}
void input(int n){
    int u, v;
    for (int i = 1; i <= n;i++){
        cin >> u >> v;
        matrix[u][v] = 1;
        // matrix[v][u] = 1;
    }
}
void output(int v, int start, int end){
    int t;
    int k = 0;
    vt.push_back(end);
    t = trace[end];
    if(t <= 0){
        cout << -1 << endl;
        return;
    }
    while(t > 0){
        vt.push_back(t);
        t = trace[t];
    }
    for (int i = vt.size() - 1; i >= 0; i--){
        cout << vt[i] << " ";
    }
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        int start, v, n, end;
        memset(visited, 0, sizeof(visited));
        memset(matrix, 0, sizeof(matrix));
        memset(trace, 0, sizeof(trace));
        cin >> v >> n >> start >> end;
        vt.clear();
        input(n);
        BFS(v, start, end);
        output(v, start, end);
    }
    return 0;
}