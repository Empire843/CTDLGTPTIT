/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  PHÂN TÍCH SỐ
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n;i++)cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool stop;
int a[101], k;
void print(){
    for (int i = 1; i <= k;i++){
        if(i == 1)
            cout << "(";
        if(i == k)
            cout << a[i];
        else
            cout << a[i] << " ";
        if(i == k)
            cout << ")";
    }
    cout << "\n";
}
void born(){
    int i = k;
    while(i > 0 && a[i] == 1)
        i--;
    if(i <= 0)
        stop = true;
    else {
        a[i]--; //giam ai đi 1 đơn vị
        int d = k - i + 1;
        cout << d << endl;
        k = i;
        for (int j = i + 1; j <= i + d / a[i]; j++){
            a[j] = a[i];
        }
        k += d / a[i];
        if (d % a[i] > 0){
            k++;
            a[k] = d % a[i];
        }
    }
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        k = 1;
        a[k] = n;
        stop = false;
        while(!stop){
            print();
            born();
        }
        cout << endl;
    }
    return 0;
}