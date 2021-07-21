/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  BIỂU THỨC TĂNG GIẢM
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    return false;
}
string solution(string s) {
    string res = "";
    stack<int> st;
    for (int i = 0; i <= s.length(); i++){
        st.push(i + 1);
        if(s[i] == 'I' || i == s.length()){
            while(!st.empty()){
                res += to_string(st.top());
                st.pop();
            }
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

