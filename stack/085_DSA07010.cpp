/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  BIẾN ĐỔI TIỀN TỐ - HẬU TỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
string solution(string s){
    string res = "";
    stack<string> st;
    for (int i = s.length() - 1; i >= 0;i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string str1 = st.top();
            st.pop();
            string str2 = st.top();
            st.pop();
            string tmp =str1 + str2 + s[i];
            st.push(tmp);
            // st.push(res);
        }else{
            st.push(string(1,s[i]));
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

