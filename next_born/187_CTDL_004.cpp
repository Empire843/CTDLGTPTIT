/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  DÃY CON TĂNG DẦN BẬC K
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usign long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool stop;
int a[1001];
int b[1001];
bool check[1001];
int res;
void Try(int i, int k, int n){
    for (int j = 1;j <= n;j++){
        if(!check[j] && j > b[i-1]){
            b[i] = j;
            check[j] = 1;
            if(i == k){
                int except = 0;
                for (int o = 1; o < k;o++){
                    // cout << b[o] << " ";
                    if(a[b[o]] > a[b[o+1]])
                        except = 1;
                }
                if(except == 0)
                res++;
                // cout << endl;
            }else
                Try(i + 1, k, n);
            check[j] = 0;
        }
    }
}
int main(){
    fastIO();
    int n, k;
    cin >> n >> k;
    res = 0;
    for (int i = 1;i <=n ;i++){
        cin >> a[i];
    }
    Try(1, k, n);
    cout << res << endl;
    return 0;
}