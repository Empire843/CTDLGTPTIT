/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SẮP XẾP DÃY CON LIÊN TỤC
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
    int l = 0, r = n - 1;
    // cout << min_element(a + l, a + n) - a << endl;
    while(min_element(a+l,a+n)-a == l){
        // cout << min_element(a + l, a + n) - a << endl;
        l++;
    }
    int i = 0;
    while(max_element(a,a+n-i)-a == r){
        r--;
        i++;
    }
    cout << l+1 << " " << r+1 << endl;
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