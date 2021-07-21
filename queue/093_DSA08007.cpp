/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  SỐ BDN 1
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
long long solution(long long n){
    queue<long long> q;
    vector<long long> v;
    // int count = 0;
    q.push(1);
    int num = 0;
    while(q.front() <= n){
        q.push(q.front()*10);
        q.push(q.front()*10+1);
        v.push_back(q.front());
        // count++;
        q.pop();
    }
    // for (int i = 0; i < v.size();i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    return v.size();
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << solution(n) << endl;
    }
    return 0;
}