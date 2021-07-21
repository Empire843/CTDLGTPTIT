/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  NGĂN XẾP 1
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

int main(){
    fastIO();
    stack<int> st;
    string s;
    int n;
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "PUSH"){
            int num;
            cin >> num;
            st.push(num);
        }else if(s == "PRINT"){
            if(!st.empty())
                cout << st.top() << endl;
            else
                cout << "NONE" << endl;
        }else if(s == "POP" && st.size() > 0)
            st.pop();
    }
    return 0;
}

