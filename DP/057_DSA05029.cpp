/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  GIẢI MÃ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long solution(string s){
    int n = s.length();
    long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1, dp[1] = 1;
    if(s[0] == '0')
        return 0;
    for (int i = 2; i <= n;i++)]]{
        if(s[i-1] > '0')
            dp[i] = dp[i - 1];
        if (s[i - 2] == '1' || ( s[i - 2] == '2' && s[i - 1] < '7'))
            dp[i] += dp[i - 2];
    }
    return dp[n];
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        string m;
        cin >> m;
        cout << solution(m) << endl;
    }
    return 0;
}