/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  TỔNG CẶP SỐ NGUYÊN TỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void solution(int n){
    int f[n+5];
    reset(f);
    for (int i = 2; i <= n; i++) {
        if (f[i] == 0) {
            for (int j = 2 * i; j <= n; j += i) {
                f[j] = 1;
            }
        }
    }

    // for (int i = 2; i < n;i++){
    //     cout << f[i] << " ";
    // }
    // cout << endl;

    for (int i = 2; i < n;i++){
        if (f[i] == 0 && f[n - i] == 0 && n - i >= 2 && i >= 2){
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        solution(n);
    }
    return 0;
}