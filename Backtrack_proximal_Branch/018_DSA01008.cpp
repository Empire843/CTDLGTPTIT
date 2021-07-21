/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  XÂU NHỊ PHÂN CÓ K BIT 1
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
//=================================================
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int a[10000];
int b[10001];
void print(int n){
    for (int i = 0; i < n;i++){
        cout << b[i];
    }
    cout << endl;
}
void Try(int n, int k, int i){
    for (int j = 0; j < 2;j++){
        b[i] = j;
        // if(j == 1)
        //     c++;
        if(i == n-1){
            int c = 0;
            for (int o = 0; o < n;o++){
                if(b[o] == 1)
                    c++;
            }
            if(c == k)
                print(n);
        }
        else{
            Try(n, k, i + 1);
        }
        // c--;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        // for (int i = 0; i < n - k;i++){
        //     a[i] = 0;
        // }
        // for (int i = n - k; i < n;i++){
        //     a[i] = 1;
        // }
        Try(n, k, 0);
    }
    return 0;
}