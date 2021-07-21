/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SẮP XẾP CHÈN
*/
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
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cout << "Buoc 0: " << a[0] << endl;
    for (int i = 1; i < n;i++){
        int key = a[i];
        int j = i - 1;
        while(a[j] > key && j >= 0){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

