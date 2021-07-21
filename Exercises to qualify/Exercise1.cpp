#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//Viết hàm có tên là DFS(int u) trên C/C++ mô tả thuật toán duyệt theo chiều sâu
//các đỉnh của đồ thị G = <V, E> được biểu diễn dưới dạng ma trận kề a[ ] [ ].
using namespace std;

// Bài 1

int a[1001][1001];
int visited[1001];
int v, e;
// hàm DFS
void DFS(int u){
    stack<int> st;
    st.push(u);
    visited[u] = 1;
    cout << u << " ";
    while(!st.empty()){
        u = st.top();
        st.pop();
        for (int i = 1; i <= v;i++){
            if(a[u][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                cout << i << " ";
                st.push(u);
                st.push(i);
                break;
            }
        }
    }
}
int main(){
    fastIO;
    int u;
    cin >> u >> v >> e;
    // nhập ma trận kề
    for (int i = 1; i <= v;i++){
        for (int j = 1; j <= v;j++){
            cin >> a[i][j];
        }
    }
    DFS(u);
}