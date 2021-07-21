/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  XÂU NHỊ PHÂN CÓ K BIT 1
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool stop;
string s;
void born(int n, int k){
    int p = s.length() - 1;
    while(s[p] == '1' && p >= 0)
        p--;
    if(p >= 0){
        s[p] = '1';
        for (int i = p + 1; i < s.length();i++){
            s[i] = '0';
        }
    }
    else
        stop = true;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        stop = false;
        s = "";
        for (int i = 0; i < k;i++){
            s += '0';
        }
        for (int i = k; i < n;i++){
            s += '1';
        }
        while(!stop){
            int count = 0;
            for (int i = 0; i < s.length();i++){
                if(s[i] == '1')
                    count++;
            }
            if(count == k)
                cout << s << endl;
            born(n, k);
        }
        // cout << endl;
    }
    return 0;
}