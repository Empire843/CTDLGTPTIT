/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  DI CHUYỂN TRONG MÊ CUNG 2
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
char b[1001];
int n;
int matrix[15][15];
bool check[15][15];
int ans;
vector<string> v;
void Try(int x, int y, string s){
    if(x == n - 1 && y == n - 1){
        v.push_back(s);
    }
    // cout << x << " " << y << endl;
    if (matrix[x + 1][y] == 1 && x + 1 < n && check[x + 1][y]){
        check[x][y] = 0;
        Try(x + 1, y, s + 'D');
        check[x][y] = 1;
    }
    if (matrix[x][y + 1] == 1 && y+1 < n && check[x][y + 1]){
        check[x][y] = 0;
        Try(x, y + 1, s + 'R');
        check[x][y] = 1;
    }  
    if (matrix[x - 1][y] == 1 && x > 0 && check[x - 1][y]){
        check[x][y] = 0;
        Try(x - 1, y, s + 'U');
        check[x][y] = 1;
    }
    if (matrix[x][y - 1] == 1 && y > 0 && check[x][y - 1]){
        check[x][y] = 0;
        Try(x, y - 1, s + 'L');
        check[x][y] = 1;
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        ans = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                cin >> matrix[i][j];
                check[i][j] = 1;
            }
        }
        if(matrix[n-1][n-1] == 0  || matrix[0][0] == 0) {
            cout << -1;
        }else{
            Try(0, 0, "");
            if(v.size() == 0)
                cout << -1;
            else {
                sort(v.begin(), v.end());
                for (int i = 0; i < v.size(); i++){
                    cout << v[i] << " ";
                }
            }
            v.clear();
        }
        cout << endl;
    }
    return 0;
}