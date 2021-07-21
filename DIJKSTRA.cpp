//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
int a[1001][1001];
int s, t, n;
int oo = 1000000;
int trace[1001];
int d[1001];
int visited[1001];
void Input(){
    reset(a);
    reset(trace);
    reset(d);
    reset(visited);
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
    for (int i = 2; i <= n;i++){
        cout << s << " --> ";
        cout << i << " is " << d[i] << ": ";
        int tmp = trace[i];
        cout << i << " <-- ";
        while (tmp != s){
            cout << tmp << " <-- ";
            tmp = trace[tmp];
        }
        cout << s << endl;
    }
}
void DIJKSTRA(){
    int u, v;
    for (v = 1; v <= n; v++){
        d[v] = a[s][v];
        trace[v] = s;
        visited[v] = 0;
    }
    d[s] = 0;
    trace[s] = 0;
    visited[s] = 1;
    int k = 2;
    //-----------------------
    cout << 1 << ": ";
    for (int i = 1; i <= n; i++){
        if (d[i] == 1000000){
            cout << "oo" << "|" << trace[i] << "   ";
        }
        else
            cout << d[i] << "|" << trace[i] << "   ";
    }
    cout << endl;
    //------------------------
    while (1){
        int u = 0, min = 1000000;
        for (v = 1; v <= n; v++)
            if (visited[v] == 0 && d[v] < min){
                u = v;
                min = d[v];
            }
        if (u == 0)
            return;
        visited[u] = 1;
        for (v = 1; v <= n; v++)
            if (visited[v] == 0 && (d[v] > (d[u] + a[u][v]))){
                d[v] = d[u] + a[u][v];
                trace[v] = u;
            }
        //----------------
        cout << k << ": ";
        for (int i = 1; i <= n; i++){
            if(visited[i] == 0)
            if(d[i] == 1000000){
                cout << "oo" << "|" << trace[i] << "   ";
            }else 
            cout << d[i] << "|" << trace[i] << "   ";
            else
                cout << " - "
                     << "   ";
        }
        cout << endl;
        //---------------
        k++;
    }
}
 
/*
13
0 2 8 0 0 0 0 0 0 0 0 0 0
0 0 2 0 0 0 9 0 0 0 0 0 0
0 0 0 6 0 8 1 0 0 0 0 0 0
7 0 0 0 0 0 0 0 0 0 0 0 0 
0 0 1 7 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 9 8 0 0 0 0
0 0 0 0 0 2 0 2 0 0 0 0 0
0 0 0 0 0 0 0 0 9 0 0 2 0
0 0 0 0 0 0 0 0 0 6 0 9 8
0 0 0 0 7 6 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 6 7 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 2
0 0 0 0 0 0 0 0 0 0 7 0 0
*/
int main(){
    fastIO;
    Input();
    DIJKSTRA();
    result();
}