//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
// const int oo = 1e9 + 7;
int oo = 100000;
int a[1001][1001];
int visited[1001], trace[1001], d[1001];
int n, s, t;
void Input(){
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
            if(a[i][j] == 0)
                a[i][j] = oo;
        }
    }
    cin >> s;
}
void result(){
    for (int i = 1; i <= n;i++){
        if(i != s){
            if(d[i] == oo)
                cout << "Khong co duong di!" << endl;
            else{
                cout << "Duong di tu " << s << " den " << i << " la " << d[i] << ": ";
                cout << i << "<--";
                int tmp = trace[i];
                while (tmp != s){
                    cout << tmp << "<--";
                    tmp = trace[tmp];
                }
                cout << s << endl;
            }
        }
    }
}
void Bellman_Ford(){
    for (int i = 1; i <= n;i++){
        d[i] = a[s][i];
        trace[i] = s;
    }
    d[s] = 0;
    for (int i = 1; i <= n;i++){
        if(d[i] == oo)
            cout << "oo" << "|" << trace[i] << "   ";
        else
            cout << d[i] << "|" << trace[i] << "   ";
    }
    cout << endl;
    for (int i = 1; i <= n - 2;i++){
        for (int j = 1; j <= n;j++){
            for (int k = 1; k <= n; k++){
                if (d[j] > d[k] + a[k][j]){
                    d[j] = d[k] + a[k][j];
                    trace[j] = k;
                }
            }
        }
        // value table
        for (int i = 1; i <= n;i++){
            if(d[i] == oo)
                cout << "oo" << "|" << trace[i] << "   ";
            else
                cout << d[i] << "|" << trace[i] << "   ";
        }
        cout << endl;
    }
}
int main(){
    fastIO;
    Input();
    Bellman_Ford();
    result();
}