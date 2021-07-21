/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  SẮP XẾP QUÂN HẬU 1
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
int b[1000];
int a[1000];
int res;
int xuoi[100], nguoc[100];
void Try (int a[], int i){
    for (int j = 1; j <= n; j++){
        if (!a[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
            b[i] = j;
            a[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if (i == n) {
                res++;
            }
            else Try(a, i+1);
			a[j] = 0; 
			xuoi[ i - j + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
}

int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        res = 0;
        cin >> n;
        Try(a, 1);
        cout << res << endl;
    }
    return 0;
}