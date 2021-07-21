//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct node { 
    int val; 
    int level; 
}; 
int solution(int s, int t) { 
    set<int> visit; 
    queue<node> q; 
    q.push({s, 0});
    node n = {s, 0};
    while (!q.empty()) {
        node top = q.front();
        q.pop(); 
        if (top.val == t)
            return top.level; 
        if (top.val*2 == t || top.val-1 == t)
            return top.level + 1;
        if (visit.find(top.val * 2) == visit.end() && top.val < t){
            n.val = top.val * 2;
            n.level = top.level + 1;
            q.push(n);
            visit.insert(top.val * 2);
        }
        if (top.val - 1 >= 0 && visit.find(top.val - 1) == visit.end()){
            n.val = top.val - 1;
            n.level = top.level+1; 
            q.push(n);
            visit.insert(top.val - 1);
        }
    } 
} 
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int s, t;
        cin >> s >> t;
        cout << solution(s, t) << endl;
    }
}