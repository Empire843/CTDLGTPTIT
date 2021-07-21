/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  DI CHUYỂN TRONG MA TRẬN
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
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n, m;
int matrix[201][201];
int res;
void Try(int D, int R){
    if(D == n-1 && R == m-1){
        res++;
    }
    if(D+1 < n){
        Try(D+1,R);
    }
    if(R+1 < m){
        Try(D, R + 1);
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        res = 0;
        cin >> n >> m;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cin >> matrix[i][j];
            }
        }
        Try(0, 0);
        cout << res << endl;
    }
    return 0;
}