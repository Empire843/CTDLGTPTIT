/* 
*  @author:         --> empire <--
*  topic: 	        Quy hoạch động
*  exercise title:  DÃY CON TĂNG DÀI NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solution(int a[], int n){
    int f[n + 2], res = 0;
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n;i++){
        for (int j = 1; j < i;j++){
            if(a[j] < a[i]){
                f[i] = max(f[j] + 1,f[i]);
            }
            res = max(res, f[i]);
        }
    }
    return res + 1;
}
void process(){
    int t;
    cin >> t;
    int test = 1;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n;i++)
            cin >> a[i];
        cout << "Test " << test << ": ";
        cout << solution(a, n) << endl;
        test++;
    }
}
int main(){
    sync_with_stdio();
    process();
    return 0;
}