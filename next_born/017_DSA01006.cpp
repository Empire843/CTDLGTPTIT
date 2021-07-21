/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  HOÁN VỊ NGƯỢC
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
// void born(int n){

//     int a[n];
//     for (int i = 0; i < n;i++){
//         a[i] = n - i ;
//         cout << a[i];
//     }
//     cout << " ";
//     while(1){
//        int i = n - 2;
//         while(a[i] < a[i+1] && i >= 0){
//             i--;
//         }
//         if(i < 0){
//             return;
//         }
//         int k = n - 1;
//         while(a[i] < a[k])
//             k--;
//         swap(a[i], a[k]);
//         int l = i+1, r = n - 1;
//         while(l<r){
//             swap(a[l], a[r]);
//             l++, r--;
//         }
//             for (int i = 0; i < n; i++)
//                 cout << a[i];
//         cout << " ";
//     }
// }
bool check[1000];
int a[1000];
int n;
string s;
vector<vector<int>> v;
void Try(int i){
    for (int j = 1; j <=n;j++){
        if (check[j] == false){
            check[j] = true;
            a[i] = j;
            if(i == n-1){
                vector<int> vt;
                for (int p = 0; p < n;p++){
                    vt.push_back(a[p]);
                    // cout << a[p];
                }
                // cout << " ";
                v.push_back(vt);
            }else
                Try(i + 1);
            check[j] = false;
        }
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        cin >> n;
        Try(0);
        for (int i = v.size()-1; i >=0;i--){
            for (int j = 0; j < v[i].size();j++){
                cout << v[i][j];
            }
            cout << " ";
        }
        v.clear();
        cout << endl;
    }
    return 0;
}