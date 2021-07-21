// @author:         --> empire <--
// topic: 	        Sắp xếp - Tìm kiếm
// exercise title:  SẮP XẾP XEN KẼ

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
void solution(int a[], int n){
    sort(a, a + n);
    int l = 0, r = n - 1;
    while(l<r){
        cout << a[r] << " " << a[l] << " ";
        l++, r--;
    }
    if(r == l)
        cout << a[r] << " ";
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        solution(a, n);
    }
    return 0;
}

