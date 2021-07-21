//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001];
bool stop = false;
void born(int n){
    for (int i = 0; i < n;i++){
        if(i == 0 || i % 2 == 0)
            a[i] = 0;
        else
            a[i] = 1;
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n;i++){
        if(i == 0 || i % 2 == 0)
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    fastIO;
    int n;
    reset(a);
    cin >> n;
    born(n);
}