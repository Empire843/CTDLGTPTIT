/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 2
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
    queue<int> q;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int num;
            cin >> num;
            q.push(num);
        }else if(s == "PRINTFRONT" || s == "PRINT"){
            if(!q.empty())
                cout << q.front() << endl;
            else
                cout << "NONE" << endl;
        }else if(s == "POP"){
            if(!q.empty())
                q.pop();
        }
    }
    return 0;
}