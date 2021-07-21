/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  DÃY NGOẶC ĐÚNG DÀI NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usign long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(string s){
    stack<int> st;
    st.push(-1);
    int res = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i] == '('){
            st.push(i);
        }else {
            if(!st.empty())
                st.pop();
            if(!st.empty()){
                res = max(res, i - st.top());
                continue;
            }
            st.push(i);
        }
    }
    return res;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
    
    return 0;
}

