/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  DÃY CON CÓ TỔNG BẰNG S
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string solution(int a[], int n, int s){
    int dp[n + 1][s + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1;i<=n;i++){
        for (int j = 1; j <= s;j++){
            if(j < a[i-1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i-1][j - a[i-1]];
        }
    }
    if(dp[n][s])
        return "YES";
    return "NO";
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, s;
        cin >> n >> s;
        int a[n+1];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n, s) << endl;
    }
    return 0;
}