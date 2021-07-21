/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  MÃ GRAY 2
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        string res = "";
        res += s[0];
        for (int i = 1; i < s.length();i++){
            if(res[i-1] == '1' && s[i] == '0' || res[i-1] == '0' && s[i] == '1')
                res += '1';
            else
                res += '0';
        }
        cout << res << endl;
    }
    return 0;
}