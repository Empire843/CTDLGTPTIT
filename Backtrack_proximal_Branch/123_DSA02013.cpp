/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  SỐ NGUYÊN TỐ
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
int n, p, s;
bool c[1001];
int a[1001];
int sum = 0;
int isPrime(int n){
    if(n<2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}
vector<vector<int>> vt;
void Try(int i){
    for (int j = p+1; j <= s;j++){
        if(c[j] == false && isPrime(j) && j > a[i-1]){
            a[i] = j;
            c[j] = true;
            // cout << sum << endl;
            // sum += a[i];
            if(i == n-1){
                vector<int> v;
                sum = 0;
                for (int o = 0; o <= i;o++){
                    sum += a[o];
                }
                if(sum == s){
                    for (int o = 0; o <=i;o++){
                        v.push_back(a[o]);
                    }
                    vt.push_back(v);
                    // return;
                }
            }else
                Try(i + 1);
            c[j] = false;
        }
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        cin >> n >> p >> s;
        reset(a);
        reset(c);
        sum = 0;
        Try(0);
        cout << vt.size() << endl;
        for (int i = 0; i < vt.size();i++){
            for (int j = 0; j < vt[i].size();j++){
                cout << vt[i][j] << " ";
            }
            cout << endl;
        }
        vt.clear();
    }
    return 0;
}