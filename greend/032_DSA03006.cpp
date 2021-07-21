/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  SẮP XẾP THAM LAM
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
string solution(int a[], int n){
    int mid = n / 2;
    for (int i = mid-1; i >=0;i--){
        if(a[i] > a[n - i -1])
            swap(a[i], a[n - i-1]);
    }
    // for (int i = 0; i < n;i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n;i++){
        if(a[i] > a[i+1])
            return "No";
    }
    return "Yes";
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        int a[n];
        input(a, n);
        cout << solution(a, n) << endl;
    }
    return 0;
}