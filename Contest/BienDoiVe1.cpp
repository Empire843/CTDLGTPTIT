//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int min_ELEMENT(int a, int b){
    if(a < b)
        return a;
    return b;
}
int solution(int n){
    int i = 2;
    int dp[n+1];
    reset(dp);
    dp[1] = 0, dp[2] = dp[1] + 1, dp[3] = dp[2];
    while(i < n+1){
        int max_e = INT32_MAX;
        if(i % 2 == 0){
            max_e = min_ELEMENT(max_e, dp[i / 2]);
        }
        if(i % 3 == 0){
            max_e = min_ELEMENT(max_e, dp[i / 3]);
        }
        max_e = min_ELEMENT(max_e, dp[i - 1]);
        dp[i] = max_e + 1;
        i++;
    }
    return dp[n];
}
void process(){
    int n;
    cin >> n;
    cout << solution(n) << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        process();
    }
}