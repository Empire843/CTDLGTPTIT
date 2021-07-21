/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  XEM PHIM
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
// #define input(a, n) for (int i = 1; i <= n;i++)cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int dp[200][25001];
long long solution(int a[],int n, int w){
    
    memset(dp, 0, sizeof(dp));
    for (int i = 1;i<=n;i++){
        for (int j = 1; j <= w;j++){
            if(j >= a[i])
                dp[i][j] = max(dp[i - 1][j], dp[i-1][j - a[i]] + a[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][w];
}
int main(){
    fastIO();
    // int t;
    // cin >> t; 
    // while(t--){
    int n, w;
    cin >> w >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << solution(a, n, w) << endl;
    
    // }
    return 0;
}