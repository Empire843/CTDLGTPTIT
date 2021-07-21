/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  ĐỔI TIỀN
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
int solution(int f[], int n, int k){
    int count = 0;
    for (int i = 0; i < n;i++){
        if(k - f[i] >= 0){
            while(k-f[i] >= 0){
                k -= f[i];
                // cout << k << " " << f[i] << endl;
                count++;
            }
        }
    }
    return count;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int k;
        cin >> k;
        // int a[n];
        // input(a, n);
        int f[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int n = 10;
        cout << solution(f, n, k) << endl;
    }
    return 0;
}