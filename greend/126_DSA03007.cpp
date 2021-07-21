/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  GIÁ TRỊ NHỎ NHẤT CỦA BIỂU THỨC
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool cmp(int i, int j) { return i > j; }
long long solution(int n, long long a[], long long b[]){
    sort(a, a + n);
    sort(b, b + n, cmp);
    long long res = 0;
    for (int i = 0; i < n;i++){
        res += a[i] * b[i];
    }
    return res;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        long long a[n], b[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < n;i++)
            cin >> b[i];
        cout << solution(n, a, b) << endl;
    }
    return 0;
}