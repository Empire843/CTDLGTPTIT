/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usigned long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void solution(int a[], int n){
    sort(a, a + n);
    int i = 1;
    while(a[i] == a[0] && i < n)
        i++;
    if(i >= n){
        cout << -1 << endl;
        return;
    }
    cout << a[0] << " " << a[i] << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        // cout << solution(a, n, k) << endl;
        solution(a, n);
    }
    return 0;
}