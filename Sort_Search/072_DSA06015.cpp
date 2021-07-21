/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  MERGE SORT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 

int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}