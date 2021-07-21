/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  MÁY ATM
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
//======================================
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool cmp(int i, int j) { return i > j; }
int solution(int a[], int n, long long k){
    int res = 0;
    if(k < 0)
        return -1;
    sort(a, a + n, cmp);
    long long sum = 0;
    for (int i = 0; i < n;i++){
        if(a[i] <= k && sum + a[i] <= k){
            sum += a[i];
            res++;
        }
        if(sum == k)
            return res;
    }
    return -1;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        int a[n];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n, k) << endl;
    }
    return 0;
}