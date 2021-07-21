/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  DI CHUYỂN TRONG MÊ CUNG 1
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
char b[1001];
int n;
int matrix[15][15];
int ans;
void Try(int D, int R, int i){
    if(D == n-1 && R == n-1){
        ans = 1;
        for (int j = 0; j < i;j++){
            cout << b[j];
        }
        cout << " ";
    }
    if(matrix[D+1][R] == 1){
        // cout << 'D';
        b[i] = 'D';
        Try(D+1,R, i+1);
    }
    if(matrix[D][R+1] == 1){
        // cout << 'R';
        b[i] = 'R';
        Try(D, R + 1,i+1);
    }
    
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        ans = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                cin >> matrix[i][j];
            }
        }
        if(matrix[n-1][n-1] == 0  || matrix[0][0] == 0) {
            cout << -1;
        }else{
            Try(0, 0, 0);
            if(ans == 0)
                cout << -1;
        }
        cout << endl;
    }
    return 0;
}