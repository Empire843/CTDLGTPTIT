/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  XÂU AB ĐẶC BIỆT
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
int a[1001], b[1001], k, n;
string s = "";
vector<string> vt;
void Try(int i){
    for (int j = 0; j <= 1;j++){
        a[i] = j;
        if (i == n - k){
            for (int o = 1; o <= n - k; o++){
                if(o == 1 && a[o] == 1){
                    string tmp = "";
                    tmp += s;
                    for (int p = 1; p <= n - k;p++){
                        if(a[p] == 1)
                            tmp += 'B';
                        else
                            tmp += 'A';
                    }
                    vt.push_back(tmp);
                }
                if (o == n - k && a[o] == 1){
                    string tmp = "";
                    for (int p = 1; p <= n - k;p++){
                        if(a[p] == 1)
                            tmp += 'B';
                        else
                            tmp += 'A';
                    }
                    tmp += s;
                    vt.push_back(tmp);
                }
                if (a[o-1] == 1 && a[o] == 1 &&  o > 1){
                    string tmp = "";
                    for (int p = 1; p <= n-k;p++){
                        if(p == o)
                            tmp += s;
                        if(a[p] == 1)
                            tmp +='B';
                        else
                            tmp += 'A';
                    }
                    vt.push_back(tmp);
                }
            }
        }else
            Try(i + 1);
    }
}
int main(){
    fastIO();
    cin >> n >> k;
    for (int i = 0; i < k;i++)
        s += 'A';
    
    Try(1);
    sort(vt.begin(), vt.end());
    cout << vt.size() << endl;
    for (int i = 0; i < vt.size();i++){
        cout << vt[i] << endl;
    }
    return 0;
}