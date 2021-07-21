/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  MUA LƯƠNG THỰC
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define FOR(i, a, b) for (int i = a; i <= b;i++)
#define FORD(i, a, b) for (int i = a; i >=b; i--)
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solution(int n, int s, int m){
    int sunday = s / 7;
    if(s * m > (s-sunday)*n)
        return -1;
    int res = 0;
    
    // int ans = n * s - sunday;
    int use = s * m;
    for (int i = 1; i <= s-sunday;i++){
        if(n*i >= use){
            return i;
        }
    }
    return -1;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        cout << solution(n, s, m) << endl;
    }
    return 0;
}