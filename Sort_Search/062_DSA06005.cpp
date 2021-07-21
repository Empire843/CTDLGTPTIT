/* 
*  @author:         --> empire <--
*  topic: 	        Sắp xếp - Tìm kiếm
*  exercise title:  HỢP VÀ GIAO CỦA HAI DÃY SỐ 2
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a)memset(a,0,sizeof(a))
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i]
#define output(a, n)            \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " "
//=================================================
using namespace std;
bool cmp(int i, int j){ return i > j; }
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
void Union(int a[], int b[], int n, int m){
    set<int> st;
    set<int>::iterator it;
    for (int i = 0; i < n;i++){
        st.insert(a[i]);
    }
    for (int i = 0; i < m;i++){
        st.insert(b[i]);
    }
    for (it = st.begin(); it != st.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
void Intersection(int a[], int b[], int n, int m){
    for (int i = 0; i < n;i++){
        if(binary_search(b,b+m,a[i])){
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n],b[m];
        input(a, n);
        input(b, m);
        sort(a, a + n);
        sort(b, b + m);
        Union(a, b, n, m);
        Intersection(a, b, n, m);
    }
    return 0;
}