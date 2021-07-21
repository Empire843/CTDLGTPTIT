//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
void solution(int a[], int b[], int c[], int n, int m, int p){
    int i = 0, j = 0, k = 0;
    vector<int> vt;
    int NotC = 0;
    while (i < n && j < m && k < p){
        if(a[i] == b[j] && a[i] == c[k]){
            vt.push_back(a[i]);
            NotC = 1;
            i++, j++, k++;
        }else if(c[k] > b[j]){
            j++;
        }else if(b[j] > a[i])
            i++;
            else
                k++;
    }
    if (NotC == 0)
        cout << "-1";
    else {
        sort(vt.begin(), vt.end());
        for (int i = 0; i < vt.size(); i++){
            cout << vt[i] << " ";
        }
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;   
    while(t--){
        int m, n, p;
        cin >> n >> m >> p;
        int a[n], b[m], c[p];
        input(a, n);
        input(b, m);
        input(c, p);
        solution(a, b, c, n, m, p);
        cout << endl;
    }
}