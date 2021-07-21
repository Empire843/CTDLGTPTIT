//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long convert(string s){
    long long num = 0;
    for (int i = 0; i < s.length();i++){
        num = num * 10 + (s[i] - '0');
    }
    return num;
}
long long solution(string s){
    long long res = 0;
    int n = s.length();
    string dp[n + 1][n + 1];
    for (int i = 0; i < n;i++){
        for (int j = i; j < n;j++){
            dp[i][j] = "";
            if(j == i)
                dp[i][j] = s[j];
            else {
                dp[i][j] = dp[i][j - 1] + s[j];
            }
            res += convert(dp[i][j]);
        }
    }
    return res;
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