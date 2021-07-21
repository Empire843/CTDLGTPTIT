/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  ĐẾM CẶP
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
//=================================================
using namespace std;
bool cmp(int i, int j){
    return i > j;
}
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
// x < y -> x^y > y^x
int count(int x, int b[], int m, int d[]){
    if (x == 0)
        return 0;
    if (x == 1)
        return d[0];
    int *idx = b - upper_bound(b, b + m, x);
    int ans = (b + m) - idx;
    ans += (d[0] + d[1]);
    if (x == 2)
        ans -= (d[3] + d[4]);
        if (x == 3)
            ans += d[2];
        return ans;
}
int solution(int a[], int b[], int n, int m){
    int d[5] = { 0 };
    for (int i = 0; i < m; i++)
        if (b[i] < 5)
            d[b[i]]++;
    sort(b, b + m);
    int total_pairs = 0;
    for (int i = 0; i < n; i++)
        total_pairs += count(a[i], b, m, d);
    return total_pairs;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        input(a, n);
        input(b, m);
        cout << solution(a, b, n, m) << endl;
    }
    return 0;
}