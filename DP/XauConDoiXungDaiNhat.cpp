//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(string s){
    int n = s.length();
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    int maxLen = 1;
    int pos = 0;
    dp[n - 1][n - 1] = 1;
    for (int i = 0; i < n - 1; i++){
        dp[i][i] = 1;
        if(s[i] == s[i+1]){
            maxLen = 2;
            dp[i][i+1] = 1;
        }
    }
    for (int i = 3; i <= n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            int k = i + j - 1;
            if (dp[j + 1][k - 1] && s[j] == s[k]) {
                dp[j][k] = 1;
                maxLen = max(maxLen, i);
            }
        }
    }
    return maxLen;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
}