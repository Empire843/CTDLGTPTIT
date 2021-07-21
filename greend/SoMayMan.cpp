//  @author: ☜(ﾟヮﾟ☜)(❁´◡`❁)༼ つ ◕_◕ ༽つ
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solution(int s){
    int a = 0, b = 0;
    while(s > 0){
        if (s % 7 == 0){
            b++, s -= 7;
        }else if(s % 4 == 0){
            a++, s -= 4;
        }else {
            a++, s -= 4;
        }
    }
    if(s < 0){
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < a;i++){
        cout << 4;
    }
    for (int i = 0; i < b;i++){
        cout << 7;
    }
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        solution(n);
    }
    return 0;
}