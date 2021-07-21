/* 
*  @author:         --> empire <--
*  topic: 	        Ngăn xếp
*  exercise title:  HÌNH CHỮ NHẬT LỚN NHẤT
*/
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;

using namespace std;
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
} 
long long slt(int a[], int n){
    stack<long long> st;
    long long max_current = 0;
    long long max_area = 0;
    long long top = 0;
    int i = 0;
    for (i = 0; i < n; ){
        if(st.empty() || a[i] >= a[st.top()]){
            st.push(i++);
        }else{
            top = st.top();
            st.pop();
            if(st.empty())
                max_area = a[top] * i;
            else
                max_area = a[top] * (i - st.top() - 1);
            // max_area = a[top] * (st.empty() ? i : i - st.top() - 1);
            max_current = max(max_area, max_current);
        }
    }
    while(!st.empty()){
        top = st.top();
        st.pop();
        if(st.empty())
            max_area = a[top] * i;
        else
            max_area = a[top] * (i - st.top() - 1);
        // max_area = a[top] * (st.empty() ? i : i - st.top() - 1);
        max_current = max(max_area, max_current);
    }
    return max_current;
}
int main(){
    fastIO();
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << slt(a, n) << endl;
    }
    
    return 0;
}

