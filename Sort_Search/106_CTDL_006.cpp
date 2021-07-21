/* 
*  @author: Quach Dinh Kien - B19DCCN348
*   title: LỌC DỮ LIỆU TRÙNG TRONG DSLK ĐƠN
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        int b[1001];
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n;i++){
            if(!b[a[i]]){
                cout << a[i] << " ";
                b[a[i]] = 1;
            }
        }
        cout << endl;
    // }
    return 0;
}