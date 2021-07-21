/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SẮP XẾP [0 1 2]
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i]
#define output(a, n)            \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " "
//=================================================
using namespace std;
bool cmp(int i, int j){
    return i > j;
}
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
// int solution(int a[], int n, int x){
//     for (int i = 0; i < n;i++){
//         if(a[i] == x)
//             return 1;
//     }
//     return -1;
// }
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        sort(a, a + n);
        for (int i = 0; i < n;i++)
            cout << a[i] << " ";
        cout << endl;
        // cout << solution(a, n) << endl;
    }
    return 0;
}