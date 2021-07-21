//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001][1001];
int solution(int n, int m){
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(i == 0 && j == 0)
                dp[i][j] = a[i][j];
            else if(i == 0)
                dp[i][j] = a[i][j] + dp[i][j - 1];
            else if(j == 0)
                dp[i][j] = a[i][j] + dp[i - 1][j];
            else dp[i][j] = a[i][j] + min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j]));
        }
    }
    return dp[n - 1][m - 1];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n;i++)
            for (int j = 0; j < m;j++)
                cin >> a[i][j];
        cout << solution(n, m) << endl;
    }
}