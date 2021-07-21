/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  SINH TỔ HỢP
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
void born(int n, int k){
    int a[k];
    for (int i = 0; i < k;i++){
        a[i] = i + 1;
        cout << a[i];
    }
    cout << " ";
    while(1){
        int i = k - 1;
        while(i >= 0 && a[i] == n - k + i + 1)
            i--;
        if(i >= 0){
            a[i]++;
            for (int j = i + 1; j <= k;j++){
                a[j] = a[i] + j - i;
            }
            for (int j = 0; j < k;j++){
                cout << a[j];
            }
            cout << " ";
        }else
            return;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        // int a[n];
        // for (int i = 0; i < n;i++)
        //     cin >> a[i];
        born(n, k);
        cout << endl;
    }
    return 0;
}