//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
vector<string> vt;
int x[1001];
void Try(int i, int n){
    for (int j = 1;j<=n;j++){
        x[i] = j;
        if(i == n-1){
            string tmp = "";
            for (int k = 0; k < n;k++){
                tmp += to_string(x[k]);
            }
            vt.push_back(tmp);
        }else
            Try(i + 1, n);
    }
    // for (int i = 0; i < vt.size(); i++){
    //     cout << vt[i]  << "-"<< endl;
    // }
}
vector<string> vtr;
void born(int n){
    int a[n];
    string tmp = "";
    for (int i = 0; i < n;i++){
        a[i] = i + 1;
        tmp += (string(1, char(a[i] + 64)));
    }
    vtr.push_back(tmp);
    tmp = "";
    // cout << vt[0] << endl;
    while(1){
        tmp = "";
        int i = n - 2;
        while(a[i] > a[i+1] && i >= 0){
            i--;
        }
        if(i < 0){
            break;
        }
        int k = n - 1;
        while(a[i] > a[k])
            k--;
        swap(a[i], a[k]);
        int l = i+1, r = n - 1;
        while(l<r){
            swap(a[l], a[r]);
            l++, r--;
        }
        for (int i = 0; i < n;i++){
            tmp += (string(1, char(a[i] + 64)));
        }
        vtr.push_back(tmp);
    }
    for (int i = 0; i < vtr.size();i++){
        for (int j = 0; j < vt.size();j++){
            cout << vtr[i] << vt[j] << endl;
        }
    }
}
int main(){
    fastIO;
    // int t;
    // cin >> t;
    // while(t--){

    // }
    int n;
    cin >> n;
    Try(0, n);
    born(n);
}