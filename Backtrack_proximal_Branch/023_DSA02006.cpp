/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  DÃY CON TỔNG BẰNG K
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
int b[1001];
int a[1001];
int sum, k, n;
int ans;
void output(int n){
    for (int i = 1; i <= n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for (int j = 1; j <= n;j++){
        
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        for (int i = 1; i <= n;i++){
            cin >> a[i];
            b[i] = 0;
        }
        Try(1);
    }
    return 0;
}