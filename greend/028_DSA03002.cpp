/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  NHẦM CHỮ SỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define FORD(i, a, b) for (int i = a; i >=b; i--)
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void solution(string a, string b){
    int num1 = 0, num2 = 0;
    int Mnum1 = 0, Mnum2 = 0;
    for (int i = 0; i <b.length();i++){
        if(b[i] == '6'){
            b[i] = '5';
        }
        num1 = num1 * 10 + (b[i] - 48);
    }
    for (int i = 0; i <a.length();i++){
        if(a[i] == '6'){
            a[i] = '5';
        }
        num2 = num2 * 10 + (a[i] - 48);
    }
    for (int i = 0; i <b.length();i++){
        if(b[i] == '5'){
            b[i] = '6';
        }
        Mnum1 = Mnum1 * 10 + (b[i] - 48);
    }
    for (int i = 0; i <a.length();i++){
        if(a[i] == '5'){
            a[i] = '6';
        }
        Mnum2 = Mnum2 * 10 + (a[i] - 48);
    }
    cout << num2 + num1 << " " << Mnum1 + Mnum2;
}
int main(){
    fastIO();
    // int t;
    // cin >> t; 
    // while(t--){
    string a, b;
    cin >> a >> b;
    // int a[n];
    // input(a, n);
    solution(a, b);
    // }
    return 0;
}