/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  số 0 và 9
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
//=================================================
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solution(int n){
    string s = "9";
    int num;
    stringstream geek(s);
    geek >> num;
    while(num % n != 0){
        int k = s.length() - 1;
        while (s[k] == '9'){
            k--;
        }
        if(k == -1){
            s = '0' + s;
            k = 0;
        }
        s[k] = '9';
        for (int j = k + 1; j < s.length();j++){
            s[j] = '0';
        }
        stringstream geek(s);
        geek >> num;
    }
    return num;
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << endl;
    }
    return 0;
}