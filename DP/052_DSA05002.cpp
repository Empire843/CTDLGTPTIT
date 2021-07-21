    /* 
    *  @author:         --> empire <--
    *  topic: 	        Quy hoạch động
    *  exercise title:  DÃY CON LẶP LẠI DÀI NHẤT
    */
    #include <bits/stdc++.h>
    const long long mod = 1e9 + 7;

    using namespace std;
    void fastIO(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int dp[1005][1005];
    int solution(string s1, string s2){
        int res = 0;
        for (int i = 1; i <= s1.length();i++){
            for (int j = 1; j <= s2.length();j++){
                if(s1[i-1] == s2[j-1] && i != j){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i-1][j]);
                res = max(res, dp[i][j]);
            }
        }
        return res;
    }
    int main(){
        fastIO();
        int t;
        cin >> t;
        while(t--){
            cin.ignore();
            int n;
            string s1, s2;
            cin >> n;

            cin >> s1;
            s2 = s1;
            // cout << s1 << " " << s2 << endl;
            cout << solution(s1, s2) << endl;
        }
        return 0;
    }