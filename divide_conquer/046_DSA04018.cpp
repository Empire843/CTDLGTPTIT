/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  ĐẾM SỐ 0
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define long long ll
#define usigned long long ull
#define FOR(i, a, b) for (int i = a; i <= b;i++)

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
int solution(int a[], int n){
    int count = 0;
    for (int i = 0; i < n;i++){
        if(a[i] == 0)
            count++;
            else
                break;
    }
    return count;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
    return 0;
}