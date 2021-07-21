//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<string> st;
        string tmp = "";
        for (int i = 0; i < s.length();i++){
            tmp += s[i];
            if(s[i] == ' '){
                st.push(tmp);
                tmp = "";
            }
        }
        tmp = tmp + " ";
        st.push(tmp);
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}