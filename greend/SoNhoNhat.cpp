//  @author: ☜(ﾟヮﾟ☜)(❁´◡`❁)༼ つ ◕_◕ ༽つ
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string solution(int s, int d){
    if(9*d < s)
        return "-1";
    string str = "";
    s -= 1;
    while(s >= 10){
        str = '9' + str;
        s -= 9;
        d--;
    }
    if(d > 1) {
        str = to_string(s) + str;
        d--;
        s -= s;
    }
    while(d > 1){
        str = '0' + str;
        d--;
    }
    if(d == 1)
        str = to_string(1+s) + str;
    return str;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int s, d;
        cin >> s >> d;
        cout << solution(s, d) << endl;
    }
    return 0;
}