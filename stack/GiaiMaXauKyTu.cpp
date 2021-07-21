//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(string s){
    stack<int> stackNumber;
    stack<char> stackChar;
    int num = 0;
    string res = "";
    for (int i = 0; i < s.length();i++){
        num = 0;
        if (s[i] >= '0' && s[i] <= '9'){
            while(s[i] >= '0' && s[i] <= '9'){
                num = num * 10 + s[i] - '0';
                i++;
            }
            i--;
            stackNumber.push(num);
        }else if(s[i] == '['){
            if (s[i - 1] >= '0' && s[i - 1] <= '9'){
                stackChar.push(s[i]);
            }else {
                stackChar.push(s[i]);
                stackNumber.push(1);
            }
        }else if(s[i] == ']'){
            int topNumber = 0;
            string topString = "";
            if(!stackNumber.empty()){
                topNumber = stackNumber.top();
                stackNumber.pop();
            }
            while(!stackChar.empty() && stackChar.top() != '['){
                topString = stackChar.top() + topString;
                stackChar.pop();
            }
            if(!stackChar.empty() && stackChar.top() == '['){
                stackChar.pop();
            }
            while(topNumber--){
                res = res + topString;
            }
            for (int j = 0; j < res.length();j++){
                stackChar.push(res[j]);
            }
            res = "";
        }else
            stackChar.push(s[i]);
    }
    while(!stackChar.empty()){
        res = stackChar.top() + res;
        stackChar.pop();
    }
    return res;
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