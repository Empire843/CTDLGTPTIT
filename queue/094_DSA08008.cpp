/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  SỐ BDN 2
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
//=================================================
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long solution(int n){
    queue<long long> q;
    q.push(1);
    long long top = q.front();
    while(top % n != 0){
        q.push(q.front() * 10);
        q.push(q.front() * 10 + 1);
        top = q.front();
        q.pop();
    }
    return top;
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solution(n) << endl;
    }
    return 0;
}