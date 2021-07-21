/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  GẤP ĐÔI DÃY SỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = b; i <= a; i--)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int n, long long k, long long len){
    /*
        1
        121
        1213121
        121312141213121
        1213121412131215121312141213121
        121312141213121512131214121312161213121412131215121312141213121
    */
    // cout << n << endl;
    if(k == len/2+1)
        return n;
    if(k <= len/2){
        return solution(n-1, k, len/2);
    }else{
        return solution(n-1,k - len/2 - 1,len/2);
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        // int a[n];
        // for (int i = 0; i < n;i++)
        //     cin >> a[i];
        cout << solution(n, k, pow(2, n) - 1) << endl;
    }
    return 0;
}