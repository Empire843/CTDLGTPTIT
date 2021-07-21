/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  DÃY SỐ 2
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i]
#define output(a, n)            \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " "
//=================================================
using namespace std;
bool cmp(int i, int j){ return i > j; }
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int f[11][11];
void Try(int a[], int n, int k){
    if(n == 0)
        return;
    for (int i = 0; i < n;i++){
        f[k][i] = a[i];
    }
    for (int i = 0; i < n-1;i++){
        a[i] = a[i + 1] + a[i];
    }
    Try(a, n - 1, k+1);
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        Try(a, n, 0);
        for (int i = n-1; i >= 0;i--){
            cout << "[";
            for (int j = 0; j < n-i;j++){
                if(j == n-i-1)
                    cout << f[i][j];
                else
                    cout << f[i][j] << " ";
            }
            cout << "] ";
        }
        cout << endl;
    }
    return 0;
}