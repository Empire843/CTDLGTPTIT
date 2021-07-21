/* 
    *  @author: Quach Dinh Kien - B19DCCN348
    */
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solution(){
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0, p = 0;
    int dp[s1.length() + 5][s2.length() + 5];
    for (int i = 0; i <= s1.length(); i++){
        for (int j = 0; j <= s2.length(); j++){
            p++;
            dp[i][j] = 0;
        }
    }
    for (int i = 0; i <= s1.length(); i++){
        for (int j = 0; j <= s2.length(); j++){
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (s1[i - 1] == s2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
                dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1])) + 1;
        }
    }
    return dp[s1.length()][s2.length()];
}
void process(){
    cout << solution() << endl;
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while (t--){
        process();
    }
    return 0;
}