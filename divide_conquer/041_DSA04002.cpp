/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  LŨY THỪA ĐẢO
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
long long reversed(long long n){
    long long num = 0;
    while(n > 0){
        num = num * 10 + n % 10;
        n /= 10;
    }
    return num;
}
long long solution(long long n, long long r){
    if(r == 1)
        return n;
    long long x = solution(n, r / 2);
    if (r % 2 == 0)
        return (x % mod * x % mod) % mod;
    else
        return n * (x % mod * x % mod) % mod;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        long long n;
        cin >> n;

        cout << solution(n, reversed(n)) << endl;
    }
    return 0;
}