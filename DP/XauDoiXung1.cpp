//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string reversed(string s){
    string res = "";
    for (int i = 0; i < s.length();i++){
        res = s[i] + res;
    }
    return res;
}
int solution(string s){
    string s1 = reversed(s);
    int n1 = s.length();
    int n2 = s1.length();
    int dp[n1 + 1][n2 + 1];
    int res = 0;
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n1;i++){
        for (int j = 1; j <= n2;j++){
            if(s[i-1] == s1[j-1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
            res = max(res, dp[i][j]);
        }
    }
    return n1 - res;
}
void process(){
    string s;
    cin >> s;
    cout << solution(s) << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        process();
    }
}