/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  SỐ FIBONACCI THỨ N
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void multipMatrix(long long f_c[2][2], long long f[2][2]){
    // long long f1 = f_c[0][0], f2 = f_c[0][1], f3 = f_c[1][0], f4 = f_c[1][1]
    int x, y, z, t;
    x = (f_c[0][0] * f[0][0] % mod + f_c[0][1] * f[1][0] % mod) % mod;
    y = (f_c[0][0] * f[0][1] % mod + f_c[0][1] * f[1][1] % mod) % mod;
    z = (f_c[1][0] * f[0][0] % mod + f_c[1][1] * f[1][0] % mod) % mod;
    t = (f_c[1][0] * f[0][1] % mod + f_c[1][1] * f[1][1] % mod) % mod;
    f_c[0][0] = x;
    f_c[0][1] = y;
    f_c[1][0] = z;
    f_c[1][1] = t;
}
// 1 1 2 3 5 8 13 21 34
// 1 2 3 4 5 6 7  8  9
void pow(long long f_c[2][2], long long f[2][2], long long n){
    if(n <= 1)
        return;
    pow(f_c, f, n / 2);
    if (n % 2 == 0){
        multipMatrix(f_c, f_c);
    }else {
        multipMatrix(f_c, f_c);
        multipMatrix(f_c, f);
    }
}
long long solution(long long f_c[2][2], long long f[2][2], long long n){
    // for (int i = 1; i <= n;i++){
    //     multipMatrix(f_c, f_c);
    // }
        pow(f_c, f, n);
    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < 2; j++){
    //         cout << f_c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return f_c[1][1];
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long f[2][2];
        long long f_c[2][2];
        memset(f, 0, sizeof(f));
        memset(f_c, 0, sizeof(f_c));
        f[0][0] = 1, f_c[0][0] = 1;
        f[0][1] = 1, f_c[0][1] = 1;
        f[1][0] = 1, f_c[1][0] = 1;
        f[1][1] = 0, f_c[1][1] = 0;
        cout << solution(f_c, f, n+1) << endl;
    }
    return 0;
}