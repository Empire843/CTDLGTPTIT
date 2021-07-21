/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  PHẦN TỬ THỨ K
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usigned long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int a[], int b[], int n, int m, int k){
    int f[m + n];
    int len = 0;
    for (int i = 0; i < max(m,n);i++){
        if(i < m)
            f[len++] = b[i];
        if(i < n)
            f[len++] = a[i];
    }
    sort(f, f + len);
    // for (int i = 0; i < m+n;i++){
    //     cout << f[i] << " ";
    // }
    // cout << endl;
    return f[k - 1];
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        b[n] = -1;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < m;i++)
            cin >> b[i];
        cout << solution(a, b, n, m, k) << endl;
    }
    return 0;
}