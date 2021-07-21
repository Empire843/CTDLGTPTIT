/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  TÍCH LỚN NHẤT - NHỎ NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long solution(int a[], int b[], int n, int m){

    long long maxx = *max_element(a, a + n);
    long long minn = *min_element(b, b + m);
    return maxx * minn;
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