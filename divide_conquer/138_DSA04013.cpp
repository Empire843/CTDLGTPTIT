/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  SẮP XẾP KANGURU
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool cmp(int i, int j) { return i > j; }
int solution(int a[], int n){
    sort(a, a + n, cmp);
    int mid = n / 2;
    // int j = mid;
    bool check[n + 1];
    int res = 0;
    memset(check, 0, sizeof(check));
    int i = 0, j = mid;
    while(i < mid && j < n){
        if (a[i] >= 2 * a[j] && check[j] == 0){
            res++;
            i++, j++;
        }else {
            j++;
        }
    }
    return n - res;
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
        cout << solution(a, n) << endl;
    }
    return 0;
}