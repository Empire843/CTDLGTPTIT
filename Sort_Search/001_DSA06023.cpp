// @author:         --> empire <--
// topic: 	        Sắp xếp - Tìm kiếm
// exercise title:  SẮP XẾP ĐỔI CHỖ TRỰC TIẾP

#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usign long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int main(){
    fastIO();
    // int t;
    // cin >> t; 
    // while(t--){
        
    // }
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n - 1)
        cin >> a[i];
    FOR(i,0,n-2){
        int k = 0;
        FOR(j,i+1,n-1){
            if(a[i] > a[j]){
                k++;
                swap(a[i], a[j]);
            }
        }
        if(k == 0)
            break;
        cout << "Buoc " << i + 1 << ": ";
        FOR(j,0,n-1){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
