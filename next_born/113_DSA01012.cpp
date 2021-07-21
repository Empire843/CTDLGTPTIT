/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  MÃ GRAY 1
*/
#include <bits/stdc++.h>
using namespace std;
bool ok;
int a[101], k, n;
int pos;
string s;
vector<string> vtr;
void init(){
    vtr.clear();
    ok = false;
    cin >> n;
    s = "";
    k = n - 2;
    for (int i = 0; i < n; i++)
    {
        s += '0';
    }
    vtr.push_back(s);
    s[n - 1] = '1';
    vtr.push_back(s);
    pos = 1;
}
void born(){
    if(pos < 0){
        k--;
        pos = vtr.size() - 1;
    }
    if(k < 0){
        ok = true;
        return;
    }
    s = vtr[pos--];
    s[k] = '1';
    vtr.push_back(s);
}
int main(){
    int t;
    cin >> t; 
    while(t--){
        init();
        while(!ok){
            born();
        }
        for (int i = 0; i < vtr.size();i++){
            cout << vtr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}