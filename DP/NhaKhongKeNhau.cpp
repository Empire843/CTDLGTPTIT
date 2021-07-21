//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(int a[], int n){
    int dp[n + 1], maxx[n + 1];
    memset(dp, 0, sizeof(dp));
    memset(maxx, 0, sizeof(maxx));
    int res = 0;
    dp[0] = a[0];
    dp[1] = a[1];
    maxx[0] = dp[0];
    maxx[1] = max(dp[1], maxx[0]);
    for (int i = 2; i < n;i++){
        dp[i] = dp[i] + maxx[i - 2];
        maxx[i] = max(maxx[i - 1], dp[i] + a[i]);
        res = max(res, maxx[i]);
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