//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(int a[], int n){
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    int res = 0;
    dp[0] = a[0];
    for (int i = 0; i < n;i++){
        dp[i] = a[i];
        for (int j = 0; j < i; j++){
            if (a[i] > a[j] && dp[i] < dp[j] + a[i]){
                dp[i] = dp[j] + a[i];
            }
        }
        res = max(res, dp[i]);
    }
    return res;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
}