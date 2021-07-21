//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int n;
int matrix[1001][1001], visited[1001];
int k = 0;
void DFS(int u){ 
    visited[u] = 1; 
    stack<int> st; 
    st.push(u);
    while(!st.empty()){ 
        u = st.top(); 
        st.pop(); 
        for (int i = 1; i <= n;i++){ 
            if(matrix[u][i] == 1 && visited[i] == 0){ 
                st.push(u); 
                st.push(i); 
                visited[i] = 1;
                k++;
                break; 
            } 
        } 
    } 
} 
string solution(){
    DFS(1);
    for (int i = 2; i <= n;i++){
        if(visited[i] == 0)
            return "NO";
    }
    if(k == n-1)
        return "YES";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        reset(visited);
        reset(matrix);
        cin >> n;
        int a, b;
        for (int i = 1; i <= n - 1; i++){
            cin >> a >> b;
            matrix[a][b] = 1;
            matrix[b][a] = 1;
        }
        cout << solution() << endl;
    }
}