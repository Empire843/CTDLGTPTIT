/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  BIỂU DIỄN ĐỒ THỊ CÓ HƯỚNG.
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solution(int n, int k, int a[], int b[]){
    for (int i = 1; i <= k;i++){
        cout << i << ": ";
        for (int j = 0; j < n;j++){
            if(a[j] == i){
                cout << b[j] << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> k >> n;
        int a[n], b[n];
        for (int i = 0; i < n;i++){
            cin >> a[i] >> b[i];
        }
        solution(n, k, a, b);
    }
    return 0;
}