/* 
*  @author:         --> empire <--
*  topic: 	        Chia và trị
*  exercise title:  TÍCH ĐA THỨC
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solution(int p, int q, int a[], int b[]){
    int res[p + q];
    memset(res, 0, sizeof(res));
    int tmp = 0;
    for (int i = 0; i < p;i++){
        for (int j = 0; j < q;j++){
            tmp = a[i] * b[j];
            res[i + j] += tmp;
        }
    }
    for (int i = 0; i < p + q - 1;i++){
        cout << res[i] << " ";
    }
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        int p, q;
        cin >> p >> q;
        int a[p], b[q];
        for (int i = 0; i < p;i++)
            cin >> a[i];
        for (int i = 0; i < q;i++)
            cin >> b[i];
        solution(p, q, a, b);
    }
    return 0;
}