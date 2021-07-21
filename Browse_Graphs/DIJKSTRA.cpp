//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int matrix[1001][1001], visited[1001];
int d[1001], trace[1001];
int u, e, v;
int oo = 100000;
void input(){
    reset(matrix);
    cin >> v >> e >> u;
    for (int i = 1; i <= e;i++){
        int x, y, z;
        cin >> x >> y >> z;
        matrix[x][y] = z;
    }
    for (int i = 1; i <= v;i++){
        for (int j = 1; j <= v;j++){
            if(matrix[i][j] == 0)
                matrix[i][j] = oo;
        }
    }
}
void DIJKSTRA(){
    for (int i = 1; i <= v;i++){
        d[i] = matrix[u][i];
        trace[i] = u;
        visited[i] = 0;
    }
    d[u] = 0;
    trace[u] = 0;
    visited[u] = 1;
    while(1){
        int min = INT_MAX;
        int pos = 0;
        for (int i = 1; i <= v;i++){
            if(visited[i] == 0 && d[i] < min){
                min = d[i];
                pos = i;
            }
        }
        if(pos == 0)
            break;
        visited[pos] = 1;
        for (int i = 1; i <= v;i++){
            if(visited[i] == 0 && d[i] > d[pos] + matrix[pos][i]){
                d[i] = d[pos] + matrix[pos][i];
                trace[i] = pos;
            }
        }
    }
    for (int i = 1; i <= v; i++){
        cout << d[i] << " ";
    }
    cout << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        reset(d);
        reset(visited);
        reset(trace);
        input();
        DIJKSTRA();
    }
}