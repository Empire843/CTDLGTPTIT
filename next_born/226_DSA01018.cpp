/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  TẬP CON LIỀN KỀ PHÍA TRƯỚC
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n, s, k, a[10010];
bool stop, c[10010];
int res = 0;
void born(){
    int i = k;
    while(i > 0 && a[i] == a[i-1]+1){
        i--;
    }
    if(i <= 0){
        for (int j = n - k+1; j <= n;j++){
            cout << j << " ";
        }
        cout << endl;
        return;
    }else {
        a[i]--;
        if(i == k){

        }else {
            // cout << i << endl;
            int p = i+1;
            int tmp = k;
            for (int j = n; j > 0;j--){
                a[tmp--] = j;
                if(tmp < p)
                    break;
            }
        }
        ///asdasdsad
        for (int j = 1; j <= k; j++){
            cout << a[j] << " ";
        }
        cout << endl;
        return;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        reset(a);
        for (int i = 1; i <= k;i++){
            cin >> a[i];
        }
        born();
    }
    return 0;
}