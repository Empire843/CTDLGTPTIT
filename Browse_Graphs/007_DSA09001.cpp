/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  CHUYỂN DANH SÁCH CẠNH SANG DANH SÁCH KỀ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void solution(int a[], int b[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> q;
    int count = 0;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= k;j++){
            if(i == a[j]){
                q.push(b[j]);
                count++;
            }
            if(i == b[j]){
                q.push(a[j]);
            }
        }
        cout << i << ": ";
        while(!q.empty()){
            cout << q.top() << " ";
            q.pop();
        }
        cout << endl;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k+1], b[k+1];
        for (int i = 1; i <= k;i++){
            cin >> a[i];
            cin >> b[i];
        }
        solution(a, b, n, k);
    }
    return 0;
}