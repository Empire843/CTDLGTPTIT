/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  TỔ HỢP
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long solution(int n, int k){
    long long dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i <= n;i++){
        for (int j = min(i, k); j > 0; j--){
            dp[j] = (dp[j - 1] + dp[j]) % mod;
        }
    }
    return dp[k];
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << solution(n, k) << endl;
    }
    return 0;
}