/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ VÔ HƯỚNG
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
void DFS(int v, int n, int u, int k){
    int truoc[v+5];
    memset(truoc, 0, sizeof(truoc));
    visited[u] = 1;
    stack<int> st;
    st.push(u);
    vt.push_back(u);
    while(!st.empty()){
        u  = st.top();
        st.pop();
        for (int i = 1; i <= v;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                // cout << i << " ";
                matrix[u][i] = 0;
                visited[i] = 1;
                st.push(u);
                st.push(i);
                vt.push_back(i);
                truoc[i] = u;
                break;
            }
        }
    }
    for (int i = 0; i <= v + 5;i++){
        cout << truoc[i] << " ";
    }
    cout << endl;
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
        int u, v, n, k;
        memset(visited, 0, sizeof(visited));
        memset(matrix, 0, sizeof(matrix));
        cin >> v >> n >> u >> k;
        vt.clear();
        input(n);
        DFS(v, n, u, k);
        // cout << endl;
    }
    return 0;
}