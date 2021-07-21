/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  KIỂM TRA ĐƯỜNG ĐI
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int visited[1001];
vector<int> vt[1001];
void BFS(int x, int y){
    queue<int> q;
    visited[x] = 1;
    q.push(x);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u == y){
            cout << "YES";
            return;
        }
        for (int i = 0; i < vt[u].size();i++){
            if(visited[vt[u][i]] == 0){
                q.push(vt[u][i]);
                visited[vt[u][i]] = 1;
            }
        }
    }
    cout << "NO";
}
void input(int n){
    int u, v;
    for (int i = 0; i < n;i++){
        cin >> u >> v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        int x, v, n, y, Q;
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < 1001;i++){
            vt[i].clear();
        }
        cin >> v >> n;
        input(n);
        cin >> Q;
        while(Q--){
            reset(visited);
            cin >> x >> y;
            BFS(x, y);
            cout << endl;
        }
    }
    return 0;
}