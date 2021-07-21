/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  SỐ LỘC PHÁT 1
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
void solution(int n){
    queue<long long> q;
    vector<long long> v;
    int k = 0;
    q.push(6);
    q.push(8);
    while(pow(10,n-1)*9 > q.front()){
        q.push(q.front() * 10 + 6);
        q.push(q.front() * 10 + 8);
        v.push_back(q.front());
        q.pop();
    }
    cout << v.size() << endl;
    for (int i = v.size()-1; i >=0;i--){
        cout << v[i] << " ";
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
        solution(n);
    }
    return 0;
}