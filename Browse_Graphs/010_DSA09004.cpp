/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  DFS TRÊN ĐỒ THỊ VÔ HƯỚNG
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
void DFS(int v, int n, int u){
    visited[u] = 1;
    stack<int> st;
    st.push(u);
    cout << u << " ";
    while(!st.empty()){
        u  = st.top();
        st.pop();
        for (int i = 1; i <= v;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                cout << i << " ";
                matrix[u][i] = 0;
                visited[i] = 1;
                st.push(u);
                st.push(i);
                break;
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
        DFS(v, n, u);
        cout << endl;
    }
    return 0;
}