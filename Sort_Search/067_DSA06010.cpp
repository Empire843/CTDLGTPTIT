/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  SẮP XẾP CHỮ SỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usigned long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void solution(string s){
    set<int> st;
    set<int>::iterator it;

    for (int i = 0; i < s.length();i++){
        if(s[i] != ' '){
            int num = s[i] - 48;
            st.insert(num);
        }
    }

    for (it = st.begin(); it != st.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        string s = "";
        getline(cin, s);
        getline(cin, s);
        solution(s);
    }
    return 0;
}