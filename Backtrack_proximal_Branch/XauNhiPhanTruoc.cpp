//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = s.length() - 1;
        while(s[i] == '0')
            i--;
        if(i >= 0){
            s[i] = '0';
        }
        for (int j = i + 1; j < s.length();j++){
            s[j] = '1';
        }
        cout << s << endl;
    }
}