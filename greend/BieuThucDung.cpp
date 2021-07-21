//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long solution(string s){
    vector<int> pos;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == '[')
            pos.push_back(i);
    int count = 0; 
    int p = 0;  
    long sum = 0;
    for (int i = 0; i < s.length(); ++i){
        if (s[i] == '['){
            ++count;
            ++p;
        }
        else if (s[i] == ']')
            --count;
        if (count < 0){
            sum += pos[p] - i;
            swap(s[i], s[pos[p]]);
            ++p;
            count = 1;
        }
    }
    return sum;
}   
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
}