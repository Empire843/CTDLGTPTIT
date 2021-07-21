//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a, 0, sizeof(a));
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
void spanning(){
    
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, e, u;
        cin >> n >> e >> u;
        vector<int> vtr[n + 1];
        vector<pair<int, int>> vt;
        for (int i = 1; i <= e; i++){
            int x, y;
            cin >> x >> y;
            vtr[x].push_back(y);
			vtr[y].push_back(x);
        }
        // Spanning_tree();
        int k = 1;
        int visited[n + 1];
        reset(visited);
        visited[u] = 1;
        stack<int> st;
        st.push(u);
        while(!st.empty()){
            u = st.top();
            st.pop();
            for (int i = 0; i < vtr[u].size();i++){
                int x = vtr[u][i];
                if(visited[x] == 0){
                    visited[x] = 1;
                    st.push(u);
                    st.push(x);
                    vt.push_back({u, x});
                    k++;
                    break;
                }
            }
        }
        if(k < n){
            cout << -1 << endl;
        }else{
            for (int i = 0; i < vt.size();i++){
                cout << vt[i].first << " " << vt[i].second << endl;
            }
        }
    }
    return 0;
}