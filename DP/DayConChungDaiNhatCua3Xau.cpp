//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(string X, string Y, string Z){
    int m = X.length();
    int n = Y.length();
    int o = Z.length();
    int L[m+1][n+1][o+1];
    for (int i=0; i<=m; i++){
        for (int j=0; j<=n; j++){
            for (int k=0; k<=o; k++){
                if (i == 0 || j == 0||k==0)
                    L[i][j][k] = 0;
                else if (X[i-1] == Y[j-1] && X[i-1]==Z[k-1])
                    L[i][j][k] = L[i-1][j-1][k-1] + 1;
                else
                    L[i][j][k] = max(max(L[i-1][j][k],
                                         L[i][j-1][k]),
                                     L[i][j][k-1]);
            }
        }
    }
    return L[m][n][o];
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int m, n, o;
        cin >> m >> n >> o;
        string X, Y, Z;
        cin >> X >> Y >> Z;
        cout << solution(X, Y, Z) << endl;
    }
}