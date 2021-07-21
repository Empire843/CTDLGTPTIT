//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
bool cmp(int x, int y){
    if(x  > y)
        return true;
    return false;
}
int main(){
    fastIO;
        int n;
        cin >> n;
        vector<int> vt1;
        vector<int> vt2;
        for (int i = 0; i < n;i++){
            int x;
            cin >> x;
            if(i == 0 || i  % 2 == 0)
                vt1.push_back(x);
            else if(i == 1 || i % 2 != 0){
                vt2.push_back(x);
            }
        }
        sort(vt1.begin(), vt1.end());
        sort(vt2.begin(), vt2.end(), cmp);
        int i = 0, j = 0;
        while(i < vt1.size() || j < vt2.size()){
            if(i < vt1.size()){
                cout << vt1[i] << " ";
                i++;
            }
            if(j < vt2.size()){
                cout << vt2[j] << " ";
                j++;
            }
        }
        cout << endl;
}