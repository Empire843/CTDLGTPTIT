//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string multi(string str1, string str2){
    int l1 = str1.length();
    int l2 = str2.length();
    vector<int> res(l1 + l2, 0);// kich thuoc la l1+l2 tat ca bang 0
    int d = 0;
    int p = 0;
    for (int i = l2 - 1; i >= 0; i--){
        int mind = 0;
        int a = str2[i] - '0';
        p = 0;
        for (int j = l1 - 1; j >= 0;j--){
            int b = str1[j] - '0';
            int sum = a * b + res[d + p] + mind;
            mind = sum / 10;
            res[d + p] = sum % 10;
            p++;
        }
        if(mind > 0)
            res[p + d] += mind;
        d++;
    }
    string s = "";
    int k = res.size() - 1;
    while(res[k] == 0 && k >= 0)
        k--;
    if(k == -1)
        return "0";
    for (int i = 0; i <= k;i++){
        s = to_string(res[i]) + s;
    }
    return s;
}
string addition(string s1, string s2){
    while(s1.length() < s2.length())
        s1 = '0' + s1;
    while(s1.length() > s2.length())
        s2 = '0' + s2;
    string res = "";
    int mind = 0;
    for (int i = s1.length() - 1; i >= 0;i--){
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        int tmp = a + b + mind;
        if (i > 0){
            if (tmp > 9){
                mind = tmp / 10;
                res = to_string(tmp % 10) + res;
            }else {
                res = to_string(tmp) + res;
                mind = 0;
            }
        }else {
            res = to_string(tmp) + res;
        }
    }
    return res;
}
string solution(int n){
    string dp[n + 1];
    dp[0] = "1";
    dp[1] = "1";
    for (int i = 2; i <= n;i++){
        dp[i] = "0";
        string ans = "0";
        for (int j = 0; j < i;j++){
            ans = addition(ans, multi(dp[j], dp[i - j - 1]));
            // cout << ans << " " << dp[j] << " " << dp[i - j - 1] << endl;
        }
        dp[i] = addition(dp[i], ans);
        // cout << dp[i] << endl;
    }
    return dp[n];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << endl;
    }
}