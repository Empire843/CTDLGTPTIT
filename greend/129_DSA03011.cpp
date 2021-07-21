/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  NỐI DÂY 2
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        long long val;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        cin >> n;
        for (int i = 0; i < n;i++){
            cin >> val;
            q.push(val);
        }
        long long res = 0;
        while(q.size() > 1){
            long long first = q.top();
            q.pop();
            long long sercond = q.top();
            q.pop();
            long long tmp = (first + sercond) % mod;
            q.push(tmp);
            res += tmp;
            res %= mod;
        }
        cout << res << endl;
    }
    return 0;
}