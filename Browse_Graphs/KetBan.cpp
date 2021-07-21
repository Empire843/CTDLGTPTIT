//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
vector<int> vt[1000001];
int n, m;
int visited[1000001];
int DFS(int u){
    int k = 0;
    visited[u] = 1; 
    stack<int> st; 
    st.push(u);
    k++;
    while(!st.empty()){ 
        u = st.top(); 
        st.pop(); 
        for (int i = 0; i < vt[u].size();i++){ 
            if(visited[vt[u][i]] == 0){ 
                st.push(u); 
                st.push(vt[u][i]);
                k++;
                visited[vt[u][i]] = 1; 
                break; 
            } 
        } 
    }
    return k;
} 
void solution(){
    int res = 0;
    for (int i = 1; i <= n;i++){
        res = max(res, DFS(i));
    }
    cout << res << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        reset(visited);
        reset(vt);
        cin >> n >> m;
        for (int i = 1; i <= m;i++){
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        solution();
    }
}