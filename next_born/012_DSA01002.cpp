/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  TẬP CON KẾ TIẾP
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
void born(int a[], int n, int k){
    int i = k-1;
    while(i >= 0 && a[i] == n - k + i + 1)
        i--;
    if(i >= 0){
        a[i]++;
        for (int j = i + 1; j <= k;j++)
            a[j] = a[i] + j - i;
    }else {
        for (int j = 1; j <= k;j++){
            cout << j << " ";
        }
        cout << endl;
        return;
    }
    for (int j = 0; j < k;j++){
        cout << a[j] << " ";
    }
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < k;i++)
            cin >> a[i];
        born(a, n, k);
    }
    return 0;
}

