//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
void solution(int a[], int n){
    int NotC = 0;
    for (int i = 0;i<n-1;i++){
        NotC = 0;
        for (int j = i + 1; j < n;j++){
            if(a[i] < a[j]){
                cout << a[j] << " ";
                NotC++;
                break;
            }
        }
        if(NotC == 0)
            cout << -1 << " ";
    }
    cout << -1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        solution(a, n);
        cout << endl;
    }
}