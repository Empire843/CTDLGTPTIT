// @author:         --> empire <--
// topic: 	        Sắp xếp - Tìm kiếm
// exercise title:  SẮP XẾP NỔI BỌT

#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usign long long ull
// #define FOR(i, a, b) for (int i = a; i <= b;i++)

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
    int i = 0;
    while(1){
        int k = 0;
        for (int j = 0; j < n - 1; j++){
            if(a[j] > a[j+1]){
                k++;
                swap(a[j], a[j + 1]);
            }
                
        }
        if(k == 0)
            break;
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n;j++){
            cout << a[j] << " ";
        }
        i++;
        cout << endl;
    }
        
    return 0;
}

