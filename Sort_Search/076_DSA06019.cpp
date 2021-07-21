/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SẮP XẾP THEO SỐ LẦN XUẤT HIỆN
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
void solution(int a[], int n){
    sort(a, a + n);
    int len = *max_element(a, a + n)+3;
    int f[len];
    reset(f);
    for (int i = 0; i < n;i++){
        f[a[i]]++;
    }
    // for (int i = 0; i < len;i++){
    //     cout << f[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < n;i++){
        int maxx = 0;
        for (int j = 0; j < len;j++){
            if(f[j] > f[maxx])
                maxx = j;
        }
        while(f[maxx] > 0){
            cout << maxx << " ";
            f[maxx] -= 1;
        }
    }
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