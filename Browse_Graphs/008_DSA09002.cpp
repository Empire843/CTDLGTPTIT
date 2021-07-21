/* 
*  @author:         --> empire <--
*  topic: 	        Duyệt đồ thị
*  exercise title:  CHUYỂN TỪ DANH SÁCH KỀ SANG DANH SÁCH CẠNH
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solution(int n){
    string s;
    vector<int> vt[100];
    string tmp = "";
    cin.ignore();
    for (int i = 1; i <= n;i++){
        getline(cin, s);
        s += " ";
        int num = 0;
        int j = 0;
        while(j < s.size()){
            if(s[j] >= '0' && s[j] <= '9'){
                num = num * 10 + (int)(s[j] - '0');
            }else if(num > 0){
                vt[i].push_back(num);
                num = 0;
            }
            j++;
        }
    }
    int d[100][100];
    memset(d, 0, sizeof(d));
    for (int i = 1; i <= n;i++){
        sort(vt[i].begin(), vt[i].end());
    }
    for (int i = 1; i <= n;i++){
        for (int j = 0; j < vt[i].size();j++){
            if(!d[i][vt[i][j]] && !d[vt[i][j]][i]){
                cout << i << " " << vt[i][j] << endl;
            }
            d[i][vt[i][j]] = d[vt[i][j]][i] = 1;
        }
    }
}
int main(){
    fastIO();
    // int t;
    // cin >> t; 
    // while(t--){
    int n;
    cin >> n;
    solution(n);
    // }
    return 0;
}