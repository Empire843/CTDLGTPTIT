// @author:         --> empire <--
// topic: 	        Sắp xếp - Tìm kiếm
// exercise title:  ĐỔI CHỖ ÍT NHẤT

#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]
#define output(a, n) for (int i = 0; i < n;i++)cout << a[i] << " "

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int a[], int n){
    int res = 0;
    for (int i = 0; i < n;i++){
        int pos = min_element(a+i, a + n) - a;
        if (pos > i){
            swap(a[i], a[pos]);
            res++;
        }
    }
    // for (int i = 0; i < n;i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    return res;
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

