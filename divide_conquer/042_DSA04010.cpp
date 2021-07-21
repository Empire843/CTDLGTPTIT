/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define input(a, n) for (int i = 0; i < n;i++) cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int max(int a, int b) { return (a > b) ? a : b; }
int max(int a, int b, int c) { return max(max(a, b), c); }
int maxCrossingSum(int arr[], int l, int m, int r){
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum = sum + arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m + 1; i <= r; i++) {
        sum = sum + arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }
    return max(left_sum + right_sum, left_sum, right_sum);
}
int maxSubArraySum(int arr[], int l, int r){
    if (l == r)
        return arr[l];
    int m = (l + r) / 2;
    return max(maxSubArraySum(arr, l, m),
               maxSubArraySum(arr, m + 1, r),
               maxCrossingSum(arr, l, m, r));
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
        cout << maxSubArraySum(a, 0, n-1) << endl;
    }
    return 0;
}