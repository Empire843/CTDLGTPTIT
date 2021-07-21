/* 
*  @author:         --> empire <--
*  topic: 	        Hàng đợi
*  exercise title:  HÀNG ĐỢI HAI ĐẦU (DEQUEUE)
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
    deque<int> dq;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSHFRONT"){
            int num;
            cin >> num;
            dq.push_front(num);
        }else if(s == "PRINTFRONT"){
            if(!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }else if(s == "POPFRONT"){
            if(!dq.empty())
                dq.pop_front();
        }else if(s == "PUSHBACK"){
            int num;
            cin >> num;
            dq.push_back(num);
        }else if(s == "PRINTBACK"){
            if(!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }else if(s == "POPBACK"){
            if(!dq.empty())
                dq.pop_back();
        }
    }
    return 0;
}