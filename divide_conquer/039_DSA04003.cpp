/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  ĐẾM DÃY
*/

// pow(2,n-1)
#include <bits/stdc++.h>
const long long mod = 123456789;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long solution(long long n){
    if (n == 1)
        return 2;
    long long x = solution(n / 2);
    if(n % 2 == 0)
        return (x % mod * x % mod) % mod;
    else
        return (2 * x % mod * x % mod) % mod;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        long long n, k;
        cin >> n;
        cout << solution(n-1) << endl;
    }
    return 0;
}