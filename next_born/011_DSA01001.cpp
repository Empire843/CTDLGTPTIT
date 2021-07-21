/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  XÂU NHỊ PHÂN KẾ TIẾP
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
void born(string s){
    
    int k = s.length()-1;
    while(s[k] == '1' && k > 0)
        k--;
    if(k == 0){
        for (int i = 0; i < s.length();i++){
            cout << '0';
        }
        return;
    }
    s[k] = '1';
    int i = k+1;
    while(i<s.length()){
        s[i] = '0';
        i++;
    }
    cout << s << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        born(s);
    }
    return 0;
}

