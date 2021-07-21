/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  CHỌN SỐ TỪ MA TRẬN VUÔNG CẤP N
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
vector<vector<int>> vt;

// method: xây dựng dãy hoán vị 1 -> n
int a[1001][1001], c[1001],b[1001],n,k;
void Try(int i){
    for (int j = 0; j < n;j++){
        if(c[j] == 0){
            b[i] = j;
            c[j] = 1;
            if(i == n-1){
                int sum = 0;
                vector<int> v;
                for (int p = 0; p < n;p++){
                    sum += a[p][b[p]];
                }
                if(sum == k){
                    for (int p = 0; p < n;p++){
                        v.push_back(b[p]);
                    }
                    vt.push_back(v);
                }
            }else
                Try(i + 1);
            c[j] = 0;
        }
    }
}
int main(){
    fastIO();
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    Try(0);
    cout << vt.size() << endl;
    for (int i = 0; i < vt.size();i++){
        for (int j = 0; j < vt[i].size();j++){
            cout << vt[i][j] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}