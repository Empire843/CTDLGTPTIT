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
    int a[10000];
    int i = 0;
    string s;
    while(cin >> s){
        if(s == "push"){
            int num;
            cin >> num;
            st.push(num);
        }else if(s == "show"){
            if(st.empty()){
                cout << "empty" << endl;
                continue;
            }
            int i = 0;
            while(!st.empty()){
                a[i++] = st.top();
                st.pop();
            }
            for (int j = 0; j < i;j++){
                cout << a[j] << " ";
            }
            for (int j = i-1; j >= 0;j--){
                st.push(a[j]);
            }
            cout << endl;
        }else if(s == "pop"){
            st.pop();
        }
    }
    return 0;
}

