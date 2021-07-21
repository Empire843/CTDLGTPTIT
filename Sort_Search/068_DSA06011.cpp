/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  TỔNG GẦN 0 NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int a[], int n){
    int res = a[0]+a[1];
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(abs(a[i] + a[j]) < abs(res)){
                res = a[i] + a[j];
            }
        }
    }

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
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
    return 0;
}