/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  PHẦN TỬ KHÁC NHAU
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
int solution(int a[], int b[], int n){
    for (int i = 0; i < n;i++){
        if(a[i] != b[i])
            return i + 1;
    }
    return -1;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        int a[n], b[n];
        b[n] = -1;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < n-1;i++)
            cin >> b[i];
        cout << solution(a, b, n) << endl;
    }
    return 0;
}