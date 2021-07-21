/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  CHIA MẢNG THÀNH HAI MẢNG CON CÓ TỔNG LỚN NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define FORD(i, a, b) for (int i = a; i >=b; i--)
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
bool cmp(int i, int j){
    return i > j;
}
int solution(int a[], int n, int k){
    sort(a,a+n,cmp);
    int res = 0;
    int kmin = min(k, n - k);
    int kmax = max(k, n - k);
    int num1 = 0, num2 = 0;
    // cout << kmax << endl;
    for (int i = 0; i < kmax;i++)
        num1 += a[i];
    for (int i = n-1; i >= n-kmin;i--)
        num2 += a[i];
    // cout << num1 << " " << num2 << endl;
    return num1-num2;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        input(a, n);
        cout << solution(a, n, k) << endl;
    }
    return 0;
}