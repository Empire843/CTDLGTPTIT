/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  TÍCH HAI SỐ NHỊ PHÂN
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string convert(string s){
    int res = 0;
    int p = 0;
    for (int i = s.length() - 1; i >= 0;i--){
        int num = s[i] - 48;
        int ans = pow(num * 2, p);
        if (p == 0 && num * 2 == 0)
            ans = 0;
        res += ans;
        p++;
    }
    return to_string(res);
}
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
        int mindx = 0;
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
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        string str1 = convert(s1);
        string str2 = convert(s2);
        // cout << convert(s1) << " " << convert(s2) << endl;
        cout << multiply(str1, str2) << endl;
    }
    return 0;
}