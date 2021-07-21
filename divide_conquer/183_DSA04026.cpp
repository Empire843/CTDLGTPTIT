/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  DÃY XÂU NHỊ PHÂN
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(long long n, long long k, long long f[]){
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(k > f[n-2])
        return solution(n - 1, k - f[n-2], f);
    else
        return solution(n - 2, k, f);
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long f[100];
        memset(f, 0, sizeof(f));
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i < 93;i++) f[i] = f[i - 1] + f[i - 2];
        cout << solution(n, k, f) << endl;
    }
    return 0;
}