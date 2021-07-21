/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  BIẾN ĐỔI TRUNG TỐ - HẬU TỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int priority_level(char c){
    if(c == '^')
        return 5;
    if (c == '*' || c == '/')
        return 4;
    if(c == '+' || c == '-')
        return 3;   
    return 2;
}
bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    return false;
}
string solution(string s) {
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.length();i++){
        if(s[i] >='A' && s[i] <='Z')
            res += s[i];
        else if(s[i] >='a' && s[i] <='z') //có cả chữ thường
            res += s[i];
        else if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }else if(isOperator(s[i])){
            while(!st.empty() && priority_level(st.top()) >= priority_level(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()){
        if(st.top() != '(')
            res += st.top();
        st.pop();
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

