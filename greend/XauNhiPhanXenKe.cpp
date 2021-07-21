//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        if(i == 0 || i % 2 == 0)cout << 0 << " ";
        else cout << 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < n;i++){
        if(i == 0 || i % 2 == 0)cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << endl;
}