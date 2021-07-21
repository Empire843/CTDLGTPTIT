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
string solution(){
    string s;
    cin >> s;
    stack<char> st;
    int res = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i] == ')'){
            char tmp = st.top();
            st.pop();
            bool flag = true;
            while(tmp != '('){
                if (tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
                    flag = false;
                tmp = st.top();
                st.pop();   
            }
            if(flag == true)
                return "Yes";
        }else
            st.push(s[i]);
    }
    return "No";
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        cout << solution() << endl;
    }
    
    return 0;
}

