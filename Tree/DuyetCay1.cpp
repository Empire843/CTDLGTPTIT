//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int search(int arr[], int x, int n){
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
void printPostOrder(int in[], int pre[], int n){
    int root = search(in, pre[0], n); // tìm vị trí của node gốc
    if (root != 0)
        printPostOrder(in, pre + 1, root);
    if (root != n - 1)
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
 
    cout << pre[0] << " ";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pre[n];
        int ino[n];
        input(ino, n);
        input(pre, n);
        printPostOrder(ino, pre, n);
        cout << endl;
    }
}