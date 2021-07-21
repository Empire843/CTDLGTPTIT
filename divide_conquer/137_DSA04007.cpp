/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  HỆ CƠ SỐ K
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
string solution(int k, string a, string b){
    while(a.length() < b.length()){
        a = '0' + a;
    }
    while(b.length() < a.length()){
        b = '0' + b;
    }
    string res = "";
    int mind = 0;
    for (int i = a.length() - 1; i >= 0;i--){
        int num1 = (int)(a[i] - 48), num2 = (int)(b[i] - 48);
        int tmp = num1 + num2 + mind;
        if (tmp < k){
            res = to_string(tmp) + res; 
            mind = 0;
        }else {
            if(i == 0){
                res = to_string(tmp - k) + res;
                res = '1' + res;
            }else
                res = to_string(tmp % k) + res;
            mind = 1;
        }
    }
    return res;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int k;
        cin >> k;
        string a, b;
        cin >> a >> b;
        cout << solution(k, a, b) << endl;
    }
    return 0;
}