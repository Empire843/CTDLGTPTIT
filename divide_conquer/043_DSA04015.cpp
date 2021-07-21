/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  TÍNH FLOOR(X)
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usigned long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int a[], int n, int k){
    for (int i = 0; i < n;i++){
        if(a[i] > k){
            if(i == 0)
                return -1;
            else
                return i;
        }
    }
    return -1;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n, k) << endl;
    }
    return 0;
}