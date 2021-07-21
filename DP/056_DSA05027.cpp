/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  CÁI TÚI
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int dp[2501][2501];
long long solution(int a[], int v[],int n, int w){
    memset(dp, 0, sizeof(dp));
    for (int i = 1;i<=n;i++){
        for (int j = 1; j <= w;j++){
            if(j >= a[i])
                dp[i][j] = max(dp[i - 1][j], dp[i-1][j - a[i]] + v[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][w];
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, w;
        cin >> n >> w;
        int a[n + 5], v[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++){
            cin >> v[i];
        }
        cout << solution(a, v, n ,w) << endl;
    
    }
    return 0;
}