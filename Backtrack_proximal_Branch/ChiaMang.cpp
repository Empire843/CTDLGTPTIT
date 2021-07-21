//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int n, k;
int a[1005], check[1001];
int x;
int sum = 0;
vector<int> vt;
vector<vector<int>> vtr;
void Try(int i){
    for (int j = 0; j < n;j++){
        if(check[j] == 0 && sum + a[j] < x){
            check[j] = 1;
            vt.push_back(a[j]);
            sum += a[j];
            cout << sum << " " << a[j] << endl;
            if(sum == x){
                for(int vtt: vt){
                    cout << vtt << "-";
                }
                cout << endl;
            }else {
                Try(i + 1);
            }
            check[j] = 0;
            sum -= a[j];
            vt.pop_back();
        }
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;   
    while(t--){
        cin >> n >> k;
        x = 0;
        vt.clear();
        reset(check);
        input(a, n);
        for (int i = 0; i < n;i++){
            x += a[i];
        }
        if(x % k != 0){
            cout << 0 << endl;
        }else {
            x /= k;
            Try(0);
        }
    }
}