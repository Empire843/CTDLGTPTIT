/* 
*  @author:         --> empire <--
*  topic: 	        Giải thuật tham lam
*  exercise title:  SẮP XẾP CÔNG VIỆC 1
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solution(int n, int a[], int b[]){
    for (int i = 0; i < n;i++){
        for (int j = i+1; j < n;j++){
            if(b[i] > b[j]){
                swap(b[i], b[j]);
                swap(a[i], a[j]);
            }
        }
    }
    // for (int i = 0; i < n;i++){
    //     cout << a[i] << " ";
    // }
    
    // cout << endl;
    // for (int i = 0; i < n;i++){
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    int res = 1;
    int j = 0;
    for (int i = 1; i < n;i++){
        if(a[i] >= b[j]){
            res++;
            j = i;
        }
    }
    return res;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < n;i++)
            cin >> b[i];
        cout << solution(n, a, b) << endl;
    }
    return 0;
}