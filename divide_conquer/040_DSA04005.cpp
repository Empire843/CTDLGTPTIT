/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  DÃY XÂU FIBONACI
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = b; i <= a; i--)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
char solution(long long f[], int n, long long k){
    if (n == 1)
        return 'A';
    if(n == 2)
        return 'B';
    if(k > f[n-2]){
        return solution(f, n - 1, k - f[n-2]);
    }else{
        return solution(f, n - 2, k);
    }
        
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        // int a[n];
        // for (int i = 0; i < n;i++)
        //     cin >> a[i];
        long long f[100];
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i < 93;i++){
            f[i] = f[i - 1] + f[i - 2];
        }
        cout << solution(f, n, k) << endl;
    }
    return 0;
}