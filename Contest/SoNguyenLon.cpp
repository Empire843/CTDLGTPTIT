//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(string n, string m){
    string res = "";
    int dp[n.length() + 5][m.length() + 5];
    reset(dp);
    for (int i = 1; i <= n.length();i++){
        for (int j = 1; j <= m.length();j++){
            if(n[i-1] == m[j-1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // for (int i = 1; i <= n.length();i++){
    //     for (int j = 1; j <= m.length();j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return dp[n.length()][m.length()];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string n, m;
        cin >> n >> m;
        cout << solution(n, m) << endl;
    }   
}