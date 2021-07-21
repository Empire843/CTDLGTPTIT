/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  LŨY THỪA
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long solution(int n, int k){
    if(k == 1)
        return n;
    long long x = solution(n, k / 2);
    cout << k/2 << endl;
    if(k % 2 == 0)
        return (x % mod * x % mod) % mod;
    else
        return (x % mod * x % mod * n) % mod;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        // int a[n];
        // for (int i = 0; i < n;i++)
        //     cin >> a[i];
        cout << solution(n, k) << endl;

    }
    return 0;
}