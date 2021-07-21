// @author:         --> empire <--
// topic: 	        Sắp xếp - Tìm kiếm
// exercise title:  SẮP XẾP THEO GIÁ TRỊ TUYỆT ĐỐI

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
void solution(int a[], int n, int k){
    for (int i = 1; i < n; i++) { 
        int diff = abs(arr[i] - k); 
        int j = i - 1; 
        if (abs(arr[j] - k) > diff) { 
            int temp = arr[i]; 
            while (abs(arr[j] - k) > diff && j >= 0) { 
                arr[j + 1] = arr[j]; 
                j--; 
            } 
            arr[j + 1] = temp; 
        } 
    }

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        input(a, n);
        solution(a, n, k);
    }
    return 0;
}

