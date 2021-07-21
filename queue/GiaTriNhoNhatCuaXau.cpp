//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(int k, string s){
    long long f[26];
    reset(f);
    for (int i = 0; i < s.length();i++){
        f[s[i] - 'A']++;
    }
    priority_queue<long long, vector<long long>, less<long long>> q(f,f+26);
    while(!q.empty() && k > 0){
        long long tmp = q.top();
        q.pop();
        tmp--;
        q.push(tmp);
        k--;
    }
    long long res = 0;
    while(!q.empty()){
        res += (q.top() * q.top());
        q.pop();
    }
    return res;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        cout << solution(k, s) << endl;
    }
}