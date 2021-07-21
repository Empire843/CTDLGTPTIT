/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  TRỘN HAI DÃY
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
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int len = 0;
        int c[m + n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
            c[len++] = a[i];
        }
        for (int i = 0; i < m;i++){
            cin >> b[i];
            c[len++] = b[i];
        }
        sort(c, c + m + n);
        for (int i = 0; i < m+n;i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}