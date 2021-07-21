/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  TÍNH GIÁ TRỊ BIỂU THỨC HẬU TỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(string s){
    int res = 0;
    stack<int> st;
    for (int i = 0; i < s.length();i++){
        if(s[i] == '+' || s[i] == '-'|| s[i] == '*' || s[i] == '/'){
            int first, second;
            if(!st.empty()){
                first = st.top();
                st.pop();
            }
            if(!st.empty()){
                second = st.top();
                st.pop();                
            }
            if(s[i] == '+'){
                st.push(first + second);
            }else if(s[i] == '-'){
                st.push(second - first);
            }else if(s[i] == '*'){
                st.push(first * second);
            }else if(s[i] == '/'){
                st.push(second / first);
            }
        }else
            st.push(s[i] - 48);
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

