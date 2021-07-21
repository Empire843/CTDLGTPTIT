/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  ĐỔI CHỖ CÁC CHỮ SỐ
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
string solution(string s, int n){
    int tmp = n;
    for (int i = 0; i < s.length();i++){
        int pos = s.length() - 1;
        for (int j = s.length() - 1; j > i;j--){
            if(s[j] > s[pos])
                pos = j;
        }
        if(s[pos]  > s[i]&& tmp > 0){
            swap(s[i], s[pos]);
            tmp--;
        }
    }
    // for (int i = 0; i < n;i++){
    //     cout << a[i] << " ";
    // }
    return s;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        string s = "";
        cin >> s;
        cout << solution(s, n) << endl;
    }
    return 0;
}