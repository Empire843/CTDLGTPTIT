//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int matrix[1001][1001];
void convert(int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(matrix[i][j] == 1){
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    fastIO;
        int n;
        cin >> n;
        convert(n);
}