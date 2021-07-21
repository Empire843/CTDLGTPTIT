//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int Try(int n){
    if(n == 1)
        return 0;
    int sub = INT_MAX;
    int div2 = INT_MAX;
    int div3 = INT_MAX;
    sub = Try(n - 1);
    if(n % 3 == 0)
        div3 = Try(n / 3);
    if(n % 2 == 0)
        div2 = Try(n / 2);
    return 1 + min(sub, min(div2, div3));
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        cout << Try(n) << endl;
    }
}