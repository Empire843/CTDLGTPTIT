//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(long long n, long long k){
    if(n < k)
        return 0;
    long long res[n + 1];
    memset(res, 0, sizeof(res));
    res[0] = n;
    for (int i = 1; i < k;i++){
        res[i] = (res[i - 1] % mod * (n - i)) % mod;
    }
    return res[k - 1];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        cout << solution(n, k) << endl;
    }
}