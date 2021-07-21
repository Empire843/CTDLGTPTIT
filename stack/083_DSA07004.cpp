/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  ĐẾM SỐ DẤU NGOẶC ĐỔI CHIỀU
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
    stack<char> st;
    int res = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i] == '(')
            st.push(s[i]);
        else{
            if(st.empty()){
                res++;
                st.push('(');
            }else if(!st.empty()){
                st.pop();
            }
            
        }
    }
    int tmp = 0;
    while(!st.empty()){
        tmp++;
        st.pop();
    }
    res += tmp / 2;
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

