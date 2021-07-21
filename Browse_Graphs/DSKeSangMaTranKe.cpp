//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int matrix[1001][1001];
void convert(int n){
    cin.ignore();
    for (int i = 0; i < n;i++){
        string s = "";
        
        getline(cin, s);
        s += " ";
        int num = 0;
        for (int j = 0; j < s.length();j++){
            if(s[j] >= '0' && s[j] <='9'){
                num = num * 10 + (int)(s[j] - '0');
            }else if(num > 0){
                matrix[i][num - 1] = 1;
                num = 0;
            }
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    fastIO;
    int n;
    cin >> n;
    convert(n);
}