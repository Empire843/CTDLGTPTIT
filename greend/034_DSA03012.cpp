/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  SẮP ĐẶT XÂU KÝ TỰ 1
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define FORD(i, a, b) for (int i = a; i >=b; i--)
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool cmp(int i, int j){
    return i > j;
}
int solution(string s){
    int f[30];
    reset(f);
    for (int i = 0; i < s.length();i++){
        f[s[i] - 'a']++;
    }
    sort(f, f + 26, cmp);
    // for (int i = 0; i < 26;i++){
    //     cout << f[i] << " ";
    // }
    // cout << s.length() << endl;
    if(s.length() % 2 != 0){
        if(f[0] <= s.length()/2+1)
            return 1;
    }else {
        if(f[0] <= s.length()/2)
            return 1;
    }
    return -1;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
    return 0;
}