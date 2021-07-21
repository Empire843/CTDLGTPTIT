/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  Tổng dãy con = K
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool stop;
int n, k;
int a[100001];
int b[100001];
bool c[100001];

vector<vector<int>> vt;
void Try(int i, int p){
    for (int j = 0; j < n;j++){
        if (c[j] == true && a[j] > b[i-1]){
            b[i] = a[j];
            c[j] = false;
            if(i == p){
                vector<int> v;
                int sum = 0;
                for (int o = 0; o <= p;o++){
                    sum += b[o];
                }
                if(sum == k){
                    for (int o = 0; o <= p;o++){
                        v.push_back(b[o]);
                    }
                    vt.push_back(v);
                }
            }else
                Try(i + 1, p);
            c[j] = true;
        }
    }
}
int main(){
    fastIO();
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        c[i] = true;
    }
    sort(a, a + n);
    int p = 0;
    int num = 0;
    while(p < n){
        Try(0, p);
        for (int i = vt.size() - 1; i >= 0;i--){
            for (int j = 0; j < vt[0].size();j++){
                cout << vt[i][j] << " ";
            }
            num++;
            cout << endl;
        }
        vt.clear();
        p++;
    }
    cout << num << endl;
    return 0;
}