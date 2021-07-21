//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    int test = 1;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int f[n + 1];
        reset(f);
        input(a, n);
        int res = 0;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < i;j++){
                if(a[j] < a[i]){
                    f[i] = max(f[j] + 1,f[i]);
                }
                res = max(res, f[i]);
            }
        }
        cout << "Test " << test << ": ";
        cout << res + 1 << endl;
    }
}