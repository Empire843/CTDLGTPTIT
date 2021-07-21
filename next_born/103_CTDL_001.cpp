/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  THUẬT TOÁN SINH
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
bool stop;
bool even;
string s;
void born(bool even, int len){
    if(even){
        for (int i = 0; i < s.length();i++){
            cout << s[i] << " ";
        }
        for (int i = s.length()-1; i >= 0;i--){
            cout << s[i] << " ";
        }
        cout << endl;
    }else{
        for (int i = 0; i < len;i++){
            cout << s[i] << " ";
        }
        for (int i = len-2; i >= 0;i--){
            cout << s[i] << " ";
        }
        cout << endl;
    }
    int k = len - 1;
    while(s[k] == '1')
        k--;
    if(k < 0){
        stop = true;
    }else {
        s[k] = '1';
        for (int i = k + 1; i < len;i++){
            s[i] = '0';
        }
    }
}
int main(){
    fastIO();
        int n, k;
        cin >> n;
        s = "";
        k = 0;
        if(n % 2 != 0)
            k = 1;
        for (int i = 0; i < n/2+k;i++){
            s += '0';
        }
        int len = s.length();
        even = false;
        if(n % 2 == 0)
            even = true;
        stop = false;
        while (!stop){
            born(even, len);
        }
    return 0;
}