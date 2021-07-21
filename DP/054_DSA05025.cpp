/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  CON ẾCH
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
long long solution(int n){
    long long dp[n+1];
    dp[0] = 1, dp[1] = 1, dp[2] = 2;
    for (long long i = 3; i <= n;i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        cout << solution(n) << endl;
    }
    return 0;
}