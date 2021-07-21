//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001];
int check[1001];
void solution(int i, int n, int k){
    for (int j = 1; j <= n;j++){
        if(check[j] == 0 && j > a[i-1]){
            a[i] = j;
            check[j] = 1;
            if(i == k){
                for (int o = 1; o <= k;o++){
                    cout << (char)(a[o] + 64);
                }
                cout << endl;
            }else
                solution(i + 1, n, k);
            check[j] = 0;
        }
    }

}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        reset(a);
        reset(check);
        cin >> n >> k;
        solution(1, n, k);
    }
}