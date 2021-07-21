/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  HÀNG ĐỢI HAI ĐẦU (DEQUEUE)
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
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "01";
        cout << 1 << " ";
        for (int i = 2; i <= n;i++){
            int k = s.length() - 1;
            while(s[k] == '1'){
                k--;
            }
            if(k == -1){
                s = '0' + s;
                k = 0;
            }
            s[k] = '1';
            for (int j = k + 1; j < s.length();j++){
                s[j] = '0';
            }
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}