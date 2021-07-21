//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(int a[], int n){
    sort(a, a + n);
    int f[6];
    reset(f);
    int len = 0;
    for (int i = 0; i < 2; i++)
    {
        if (a[i] < 0)
            f[len++] = a[i];
        else
            break;
    }
    for (int i = n - 3; i < n; i++)
    {
        if (a[i] > 0)
            f[len++] = a[i];
    }
    int maxx = 0;
    int res = 1;
    for (int i = 0; i < len-2;i++){
        for (int j = 1; j < len - 1; j++){
            for (int k = 2; k < len;k++){
                res = f[i] * f[j] * f[k];
                maxx = max(maxx, res);
            }
        }
    }

    return maxx;
}
int main(){
    fastIO;
    int n;
    cin >> n;
    int a[n];
    input(a, n);
    cout << solution(a, n) << endl;
    return 0;
}