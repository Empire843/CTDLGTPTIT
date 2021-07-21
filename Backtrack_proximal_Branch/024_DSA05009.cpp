/* 
*  @author:         --> empire <--
*  topic: 	        Quay lui - Nhánh cận
*  exercise title:  TẬP CON BẰNG NHAU(dùng pp bài dãy số có tổng s)
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
//=================================================
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool findPartiion(int arr[], int n){
    int sum = 0;
    int i, j;
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum % 2 != 0)
        return false;
 
    bool part[sum / 2 + 1];
    for (i = 0; i <= sum / 2; i++) {
        part[i] = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = sum / 2; j >= arr[i];j--) { // check if sum - arr[i]
            if (part[j - arr[i]] == 1 || j == arr[i])
                part[j] = 1;
        }
    }
 
    return part[sum / 2];
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a, n);
        int sum = 0;
        if (findPartiion(a, n) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}