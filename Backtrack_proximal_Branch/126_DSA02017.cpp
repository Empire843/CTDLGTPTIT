/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  SẮP XẾP QUÂN HẬU 2
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n, m;
int b[1000];
int a[1000];
int matrix[1001][1001];
int res;
int maxx;
int xuoi[100], nguoc[100];
void Try (int i){
    for (int j = 1; j <= 8; j++){
        if (!a[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
            // b[i] = j;
            res += matrix[i][j];
            // cout << res << endl;
            a[j] = 1;//cot thu j
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if (i == 8) {
                maxx = max(res, maxx);
            }
            else Try(i+1);
			a[j] = 0;
            res -= matrix[i][j];
            xuoi[ i - j + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
}
void input(){
    res = 0;
    maxx = 0;
    memset(a, 0, sizeof(a));
    for (int i = 1; i <=8;i++){
        for (int j = 1; j <= 8;j++){
            cin >> matrix[i][j];
        }
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        input();
        Try(1);
        cout << maxx << endl;
    }
    return 0;
}