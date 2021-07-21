/* 
*  @author: Quach Dinh Kien - B19DCCN348
*   title: XÓA DỮ LIỆU TRONG DSLK ĐƠN
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int main(){
    sync_with_stdio();
    // int t;
    // cin >> t; 
    // while(t--){
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cin >> k;
        for (int i = 0; i < n;i++){
            if(a[i] != k)
                cout << a[i] << " ";
        }
        cout << endl;
    // }
    return 0;
}