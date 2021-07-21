//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1005][1005];
bool visited[1001];
int v;
void BFS(int u){
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        cout << u << " ";
        q.pop();
        int i = 1;
        while(1){
            if(matrix[u][i] == 1 && visited[i] == 0){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
int solution(int m, int n){
    return a[m-5][n-4];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int a[m + 5][n + 5];
        for (int i = 1; i <= m;i++)
            for (int j = 1; j <= n;j++)
                cin >> a[i][j];
        cout << solution(m, n) << endl;
    }
}