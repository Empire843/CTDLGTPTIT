/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  SINH HOÁN VỊ
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
// void Print(string s){
//     cout << s << " ";
// }
void born(int n){

    int a[n];
    for (int i = 0; i < n;i++){
        a[i] = i + 1;
        cout << a[i];
    }
    cout << " ";
    while(1){
       int i = n - 2;
        while(a[i] > a[i+1] && i >= 0){
            i--;
        }
        if(i < 0){
            return;
        }
        int k = n - 1;
        while(a[i] > a[k])
            k--;
        swap(a[i], a[k]);
        int l = i+1, r = n - 1;
        while(l<r){
            swap(a[l], a[r]);
            l++, r--;
        }
        for (int i = 0; i < n;i++)
            cout << a[i];
        cout << " ";
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        // int a[n];
        // for (int i = 0; i < n;i++)
        //     cin >> a[i];
        born(n);
        cout << endl;
    }
    return 0;
}