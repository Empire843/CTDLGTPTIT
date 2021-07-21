//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string s;
int n;
vector<string> vt;
void Try(int i){
    for (int j = 0; j <= 1;j++){
        if(j == 0)
            s[i] = 'H';
        else s[i] = 'A';
        if(i == n-1){
            if(s[0] != 'H' || s[n-1] != 'A'){
            }else{//0 H, 1 A
                int stop = 0;
                for (int o = 1; o < n;o++){
                    if(s[o] == 'H' && s[o-1] == 'H'){
                        stop = 1;
                        break;
                    }
                }
                if(stop == 0)
                    vt.push_back(s);
            }
        }else
            Try(i + 1);
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        s = "";
        vt.clear();
        for (int i = 0; i < n;i++){
            s += 'H';
        }
        Try(0);
        sort(vt.begin(), vt.end());
        for (int i = 0; i < vt.size();i++){
            cout << vt[i] << endl;
        }
    }
}