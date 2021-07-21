/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  NỐI DÂY 1
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
bool cmp(int i, int j){
    return i > j;
}
long long solution(int a[], int n){
    priority_queue<int, vector<int>, greater<int>> q(a, a + n);
    long long res = 0;
    while(q.size() > 1){
        int first = q.top();
        q.pop();
        int sercond = q.top();
        q.pop();

        res += (first + sercond);
        q.push(first + sercond);
    }
    return res;
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