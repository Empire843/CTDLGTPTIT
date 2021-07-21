//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001][1001];
int d[1001][1001];
int e[1001][1001];
int n;
const long long oo = 1000000;
void Input(){
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
            if(a[i][j] == 0 && i != j)
                a[i][j] = oo;
        }
    }
}
void Floyd(){
    // khoi tao
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            d[i][j] = a[i][j], e[i][j] = i;
        }
    }
    for (int k = 1; k <= n; k++){
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= n;j++)
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                    e[i][j] = k;
                }
            // show value table
            for (int j = 1; j <= n; j++){
                if (d[i][j] == oo)
                    cout << "oo"
                         << "|" << e[i][j] << "   ";
                else cout << d[i][j] << "|" << e[i][j] << "   ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main(){
    fastIO;
    Input();
    Floyd();
}