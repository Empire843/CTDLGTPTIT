/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  TẬP QUÂN SỰ
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
int a[1001], b[1001], k, n;
bool full;
void born(){
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i + 1){
        i--;
    }
    if(i < 0){
        for (int p = 0; p < k;p++){
            a[p] = p + 1;
        }
        full = true;
        return;
    }
    a[i]++;
    for (int j = i + 1; j < k;j++){
        a[j] = a[j - 1] + 1;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        full = false;
        cin >> n >> k;
        for (int i = 0; i < k;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        born();
        int count = 0;
        if(full == true)
            cout << k << endl;
        else {
            for (int i = 0; i < k;i++){
                // cout << a[i] << " ";
                if(binary_search(b,b+k,a[i]))
                    count++;
            }
            // cout << endl;
            cout << k - count << endl;
        }
    }
    return 0;
}