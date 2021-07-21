/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  TÌM BỘI SỐ
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
int n, a[1001];
bool stop;
void Try(int i, int k){
    for (int j = 0; j <= 1;j++){
        if(!stop){
            a[i] = j*9;
            if(i == k-1){
                long long num = 0;
                for (int p = 0; p < k;p++){
                    num = num * 10 + a[p];
                    // cout << a[p] << " ";
                }
                if(num % n == 0 && num != 0){
                    stop = true;
                    cout << num << endl;
                    return;
                }
            }else
                Try(i + 1, k);
        }
    }
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int k = 1;
        stop = false;
        Try(0, 4);
        while(k <= 16 && !stop){
            Try(0, k);
            memset(a, 0, sizeof(a));
            k++;
        }
    }
    return 0;
}