/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  HOÁN VỊ XÂU KÝ TỰ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i]
#define output(a, n)            \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " "
//=================================================
using namespace std;
bool cmp(int i, int j){ return i > j; }
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
char b[100001];
int check[100001];
void Try(char a[], int n, int i){
    for (int j = i; j < n;j++){
        if(check[j] == 0){
            b[i] = a[j];
            check[j] = 1;
            if(i == n-1){
                for (int i = 0; i < n;i++){
                    cout << b[i];
                }
                cout << " ";
            }else
                Try(a, n, i + 1);
            check[j] = 0;
        }
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        char a[s.length()];
        for (int i = 0; i < s.length();i++){
            a[i] = s[i];
        }
        Try(a, s.length(), 0);
        cout << endl;
    }
    return 0;
}