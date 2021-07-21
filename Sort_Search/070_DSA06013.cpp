/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SỐ LẦN XUẤT HIỆN
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 

bool cmp(int i, int j) { return i > j; }
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        // sort(a, a + n,cmp);
        int count = 0;
        for (int i = 0; i < n;i++){
            if(a[i] == k)
                count++;
        }
        if(count == 0)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
    return 0;
}