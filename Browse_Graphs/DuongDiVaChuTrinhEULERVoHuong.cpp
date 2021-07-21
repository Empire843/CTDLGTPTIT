#include <bits/stdc++.h>
using namespace std;
int a, b;
bool chuaxet[1005];
vector<int> ke[1005];
void init(){
    for (int i = 0; i < 1001; i++){
        ke[i].clear();
        chuaxet[i] = true;
    }
}

void BFS(int u){
    queue<int> k;
    k.push(u);
    chuaxet[u] = false;
    while (!k.empty()){
        int top = k.front();
        k.pop();
        for (int i = 0; i < ke[top].size(); i++){
            if (chuaxet[ke[top][i]]){
                chuaxet[ke[top][i]] = false;
                k.push(ke[top][i]);
            }
        }
    }
}
int TPLT(){
    int soTPLT = 0;
    for (int i = 1; i <= a; i++){
        if (chuaxet[i]){
            soTPLT++;
            BFS(i);
        }
    }
    return soTPLT;
}
void check(){
    int dem = 0;
    for (int i = 1; i <= a; i++){
        int x = ke[i].size();
        if (x % 2 != 0)
            dem++;
    }
    if (dem == 0)
        cout << "2";
    else if (dem == 2)
        cout << "1";
    else
        cout << "0";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        init();
        for (int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[v].push_back(u);
            ke[u].push_back(v);
        }
        if (TPLT() != 1)
            cout << 0;
        else
        {
            check();
        }
        cout << endl;
    }
    return 0;
}