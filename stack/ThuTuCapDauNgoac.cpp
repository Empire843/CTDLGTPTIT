//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
void solution(string s){
    stack<int> st;
    int num = 1;
    for (int i = 0; i < s.length();i++){
        if(s[i] == '('){
            cout << num << " ";
            st.push(num++);
        }
        else if(s[i] == ')'){
            cout << st.top() << " ";
            st.pop();
        }
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solution(s);
        cout << endl;
    }
}