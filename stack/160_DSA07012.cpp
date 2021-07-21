/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  BIẾN ĐỔI HẬU TỐ - TRUNG TỐ
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
    stack<string> st;
    for (int i = 0; i < s.length(); i++){
        if(!isOperator(s[i])){
            st.push(string(1, s[i]));
        }else {
            string first = "", second = "";
            if(!st.empty()){
                first = st.top();
                st.pop();
            }
            if(!st.empty()){
                second = st.top();
                st.pop();
            }
            string tmp = "(" + second + s[i] + first + ")";
            st.push(tmp);
        }
    }
    return st.top();
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

