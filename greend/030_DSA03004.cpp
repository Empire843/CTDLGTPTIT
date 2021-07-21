/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  TỔNG NHỎ NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define FORD(i, a, b) for (int i = a; i >=b; i--)
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long solution(int a[], int n){
    sort(a, a + n);
    long long num1 = 0, num2 = 0;
    for (int i = 0; i < n;i++){
        if(i == 0 || i % 2 == 0)
            num1 = num1 * 10 + a[i];
        else
            num2 = num2 * 10 + a[i];
    }
    return num1 + num2;
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