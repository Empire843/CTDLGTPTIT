/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  PHẦN TỬ LỚN NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
// void solution(int a[], int n){
//     int res = a[0]+a[1];
//     for (int i = 0; i < n;i++){
//         for (int j = i + 1; j < n;j++){
//             if(abs(a[i] + a[j]) < abs(res)){
//                 res = a[i] + a[j];
//             }
//         }
//     }

//     return res;
// }
bool cmp(int i, int j) { return i > j; }
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
        sort(a, a + n,cmp);
        for (int i = 0; i < k;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}