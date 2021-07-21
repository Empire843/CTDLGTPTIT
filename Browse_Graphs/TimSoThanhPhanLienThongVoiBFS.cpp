//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int visited[1005];
int matrix[1005][1005];
int v;// số đỉnh
int e;// số cạnh
int k; // số thành phần liên thông
void init(){
    k = 0, v = 0, e = 0;
    memset(matrix, 0, sizeof(matrix));
    memset(visited, 0, sizeof(visited));
}
void input(){
    cin >> v >> e;
    int a, b;
    // chuyển từ danh sách cạnh sang ma trận kề
    for (int i = 1; i <= e;i++){
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 1; i <= v;i++){
            if (matrix[u][i] == 1 && visited[i] == 0){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
void DFS(int u){
    visited[u] = 1;
    stack<int> st;
    st.push(u);
    while(!st.empty()){
        u  = st.top();
        st.pop();
        for (int i = 1; i <= v;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                matrix[u][i] = 0;
                visited[i] = 1;
                st.push(u);
                st.push(i);
                break;
            }
        }
    }
}
int components(){
    for (int i = 1; i <= v;i++){
        if(visited[i] == 0){
            DFS(i);
            k++;
        }
    }
    return k;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        init();
        input();
        cout << components() << endl;
    }
}