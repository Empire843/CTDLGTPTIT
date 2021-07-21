/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  BỔ SUNG PHẦN TỬ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i]
#define output(a, n)            \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " "
//=================================================
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int a[], int n){
    int f[*max_element(a, a + n) + 5];
    memset(f, 0, sizeof(f));
    for (int i = 0; i < n;i++){
        f[a[i]]++;
    }
    int maxx = *max_element(a, a + n);
    int minn = *min_element(a, a + n);
    int count = 0;
    for (int i = minn; i <= maxx;i++){
        // cout << f[i] << " ";
        if(f[i] == 0)
            count++;
    }
    // cout << endl;
    // for (int i = 0; i < n;i++){
    //     cout << a[i] << " ";
    // }
    return count; 
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        cout << solution(a, n) << endl;
    }
    return 0;
}