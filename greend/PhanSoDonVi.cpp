//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
//gt code:
//2/3 va 1/3->1/(3/2)va 1/(3/1)<1/(mau/tu);
//neu mau%tu==0 dung lai va in kq(1/3)
//neu ko gia su 1/(3/2)=1/a=1/b+x;  <b:res,a:mau/tu>
//ta thay 1/a>1/b->b>a ->gan luon ban dau=a+1 lay nguyen
//luc do x=1/a-1/b=b-a/a*b, x dung lai khi a*b%b-a;
//vd 1/(3/2) |3/2+1|=2 ->b=2->x=2/3-1/2=1/6 dung
int main(){
    int t;
    cin >> t;
    while (t--){
        long long tuso, mauso;
        cin >> tuso >> mauso;
        long long res;
        while (1){
            if (mauso % tuso == 0){
                cout << "1/" << mauso / tuso << endl;
                break;
            }else {
                res = mauso / tuso + 1;
                cout << "1/" << res;
                cout << " + ";
                tuso = tuso * res - mauso;
                mauso = mauso * res;
            }
        }
    }
    return 0;
}