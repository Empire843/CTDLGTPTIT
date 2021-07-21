//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001][1001];
int visited[1001], trace[1001], d[1001];
int n, s;
int oo = 100000;
void Input(){
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
            if(a[i][j] == 0 && i != j)
                a[i][j] = oo;
        }
    }
    cin >> s;
}
void PRIM(){ 
    // khoi tao
    for (int i = 1; i <= n; i++){
        trace[i] = s;
        d[i] = a[s][i];
        visited[i] = 0;
    }
    visited[s] = 1;
    d[s] = 0;
    //---------------------
    for (int i = 1; i <= n;i++){
        if (d[i] == oo)
            cout << "oo"
                 << "|" << trace[i] << "  ";
        else
            cout << d[i] << "|" << trace[i] << "  ";
    }
    cout << endl;
    //-----------
    for (int v = 1; v <= n - 1;v++){
        int min = oo;
        int u = 0;
        for (int i = 1; i <= n;i++){
            if(visited[i] == 0 && d[i] < min){
                min = d[i];
                u = i;
            } 
        }
        if(u == 0){
            cout << "Khong co cay khung" << endl;
            return;
        }
        visited[u] = 1;
        for (int i = 1; i <= n;i++){
            if(visited[i] == 0 && d[i] > a[u][i]){
                d[i] = a[u][i];
                trace[i] = u;
            }
        }
        for (int i = 1; i <= n;i++){
            if(visited[i] == 1)
                cout << " - "
                     << "   ";
            else 
            if(d[i] == oo)
                cout << "oo" << "|" << trace[i] << "  ";
            else 
                cout << d[i] << "|" << trace[i] << "  ";
        }
        cout << endl;
    }
    /*
12
0 1 0 0 4 5 0 0 0 0 0 0
1 0 2 0 6 3 0 0 0 0 0 2
0 2 0 3 5 0 0 0 0 0 0 0
0 0 3 0 0 0 0 2 0 0 0 0
4 6 5 0 0 0 1 0 3 2 0 0
5 3 0 0 0 0 4 0 0 3 0 0
0 0 0 0 1 4 0 5 0 3 0 0
0 0 0 2 0 0 5 0 0 0 0 0
0 0 0 0 3 0 0 0 0 0 0 0
0 0 0 0 2 3 3 0 0 0 1 0
0 0 0 0 0 0 0 0 0 1 0 0
0 2 0 0 0 0 0 0 0 0 0 0
    */
    int kq = 0;
    for (int i = 1; i <= n;i++){
        cout << "(" << i << "," << trace[i] << "); ";
        kq += d[i];
    }
    cout << endl;
    cout << kq << endl;
}
int main(){
    fastIO;
    Input();
    PRIM();
}
