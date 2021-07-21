/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  LŨY THỪA MA TRẬN 1
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void multipMatrix(long long f_c[10][10], long long f[10][10], long long n){
    long long d[10][10];
    memset(d, 0, sizeof(d));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            d[i][j] = 0;
            for (int k = 0; k < n;k++){
                d[i][j] += (f_c[i][k] * f[k][j])%mod;
            }
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            f_c[i][j] = d[i][j]%mod;
        }
    }
}
void pow(long long f_c[10][10], long long f[10][10], long long n, long long k){
    if(k <= 1)
        return;
    pow(f_c, f, n, k / 2);
    if (k % 2 == 0){
        multipMatrix(f_c, f_c, n);
    }else {
        multipMatrix(f_c, f_c, n);
        multipMatrix(f_c, f, n);
    }
}
void solution(long long f_c[10][10], long long f[10][10], long long n, long long k){
    pow(f_c, f, n, k);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << f_c[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long f[10][10];
        long long f_c[10][10];
        memset(f, 0, sizeof(f));
        memset(f_c, 0, sizeof(f_c));
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                cin >> f[i][j];
                f_c[i][j] = f[i][j];
            }
        }
        solution(f_c, f, n, k);
    }
    return 0;
}