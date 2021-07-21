/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 1
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
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--){
        queue<int> q;
        int n;
        cin >> n;
        int opt;
        while(n--){
            cin >> opt;
            switch (opt){
                case 1:
                    cout << q.size() << endl;
                    break;
                case 2:
                    if(q.empty())
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                    break;
                case 3:
                    int num;
                    cin >> num;
                    q.push(num);
                    break;
                case 4:
                    if(!q.empty()){
                        vector<int> v;
                        while(!q.empty()){
                            v.push_back(q.front());
                            q.pop();
                        }
                        for (int i = 1; i < v.size();i++){
                            q.push(v[i]);
                        }
                    }
                    break;
                case 5:
                    if(!q.empty())
                        cout << q.front() << endl;
                    else
                        cout << -1 << endl;
                    break;
                case 6:
                    if(!q.empty()){
                        cout << q.back() << endl;
                    }else
                        cout << -1 << endl;
                    break;
                default:
                    break;
            }
        }
    }
    return 0;
}