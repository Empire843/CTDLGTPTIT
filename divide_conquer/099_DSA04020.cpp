/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  TÌM KIẾM NHỊ PHÂN
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
int solution(int a[], int l, int r, int k){
    while (l <= r){
        int mid = l + (r - l) / 2;
        if(a[mid] == k)
            return mid+1;
        if(a[mid] > k)
            return solution(a, l, mid - 1, k);
        return solution(a, mid + 1, r, k);
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
        // cout << solution(a, n, k) << endl;
        if (solution(a, 0, n - 1, k) == -1)
            cout << "NO" << endl;
        else
            cout << solution(a, 0, n - 1, k) << endl;
    }
    return 0;
}