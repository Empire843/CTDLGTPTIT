#include <bits/stdc++.h>
using namespace std;
int check[101], before[101], g[101][101], f[101][101];
void BFS(int s, int n, int g[][101]){
    queue<int> que;
    check[s] = 1;
    que.push(s);
    while (!que.empty()){
        int x = que.front();
        que.pop();
        for (int i = 1; i <= n; i++)
            if (!check[i] && g[x][i]){
                que.push(i);
                check[i] = 1;
                before[i] = x;
            }
    }
}
void MaxFlow(int c[][101], int s, int t, int n, int &value){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++){
            g[i][j] = c[i][j];
            f[i][j] = 0;
        }
    while (1){
        memset(check, 0, sizeof(check));
        memset(before, 0, sizeof(before));
        BFS(s, n, g);
        if (before[t]){
            int Min = INT_MAX;
            for (int i = t; i != s; i = before[i]){
                int x = before[i];
                Min = min(Min, g[x][i]);
            }
            for (int i = t; i != s; i = before[i]){
                int x = before[i];
                if (c[x][i])
                    f[x][i] += Min;
                else
                    f[i][x] -= Min;
                g[x][i] -= Min;
                g[i][x] += Min;
            }
            value += Min;
        }
        else
            return;
    }
}
int main(){
    int n, c[101][101];
    int value = 0;
    ifstream read("DT.INP");
    read >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            read >> c[i][j];
    read.close();
    MaxFlow(c, 1, n, n, value);
    ofstream write("DT.OUT");
    write << value << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            write << f[i][j] << " ";
        write << endl;
    }
    write.close();
    return 0;
}
