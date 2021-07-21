/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  XÂU AB CÓ ĐỘ DÀI N
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usign long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void sinh(int n){
    string s = "";
    for (int i = 0; i < n;i++){
        s += 'A';
    }
    cout << s << " ";
    while(1){
        int k = s.length()-1;
        while(s[k] == 'B' && k >= 0)
            k--;
        // cout << k << endl;
        if(k < 0){
            // for (int i = 0; i < s.length();i++){
            //     cout << 'A';
            // }
            return;
        }
        s[k] = 'B';
        int i = k+1;
        while(i<s.length()){
            s[i] = 'A';
            i++;
        }
        cout << s << " ";
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        sinh(n);
        cout << endl;
    }
    return 0;
}