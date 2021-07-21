//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[501][501];
int dp[501][501];
int solution(int m, int n){
    int res = 0;
    for (int i = 1; i < n;i++){
        for (int j = 1; j < m;j++){
            if(a[i][j] == 0)
                continue;
            if (a[i - 1][j - 1] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1){
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            }
            res = max(res, dp[i][j]);
        }
    }
    return res;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> n >> m;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cin >> a[i][j];
                dp[i][j] = a[i][j];
                if(i == 0 || j == 0)
                    dp[i][j] = 1;
            }
        }
        cout << solution(m, n) << endl;
    }
}