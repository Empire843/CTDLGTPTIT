//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(int n){
    long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    int i2 = 1, i3 = 1, i5 = 1;
    for (int i = 2; i <= n;i++){
        dp[i] = min(dp[i2] * 2, min(dp[i3] * 3, dp[i5] * 5));
        if (dp[i] == dp[i2] * 2)
            i2++;
        if(dp[i] == dp[i3] * 3)
            i3++;
        if(dp[i] == dp[i5] * 5)
            i5++;
    }
    return dp[n];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << endl;
    }
}