/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  TẬP HỢP
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
int n, s, k, a[1001];
bool stop, c[1001];
int res = 0;
vector<vector<int>> vt;
void Try(int i){
    for (int j = 0; j <= n;j++){
        if(c[j] == false && j > a[i-1]){
            a[i] = j;
            c[j] = true;
            if(i == k-1){
                int sum = 0;
                for (int p = 0; p < k;p++){
                    // cout << a[p] << " ";
                    sum += a[p];
                }
                // cout << endl;
                if(sum == s)
                    res++;
            }else
                Try(i + 1);
            c[j] = false;
        }
    }
}
int main(){
    fastIO();
    cin >> n >> k >> s;
    while(n != 0 && k != 0 && s != 0){
        res = 0;
        
        Try(0);
        cout << res << endl;
        cin >> n >> k >> s;
        // break;
    }
    return 0;
}