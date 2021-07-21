/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  BẬC THANG
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long solution(int n, int k){
    long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1, dp[1] = 1,dp[2] = 2;
    for (int i = 3; i <= n;i++){
        for (int j = 1; j <= min(i, k); j++){
            dp[i] += dp[i - j];
            dp[i] %= mod;
        }
    }
    return dp[n]%mod;
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