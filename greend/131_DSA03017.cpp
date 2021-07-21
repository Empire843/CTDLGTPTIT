/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  GIÁ TRỊ NHỎ NHẤT CỦA XÂU
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool cmp(int i, int j) { return i > j; }
long long solution(int k, string s){
    int f[50];
    reset(f);
    for (int i = 0; i < s.length();i++){
        f[s[i] - 65]++;
    }
    sort(f, f + 26, cmp);
    while(k > 0){
        int pos = max_element(f, f + 26) - f;
        f[pos]--;
        k--;
    }
    long long res = 0;
    for (int i = 0; i <= 26;i++){
        res += (f[i] * f[i]);
    }
        return res;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        cout << solution(k, s) << endl;
    }
    return 0;
}