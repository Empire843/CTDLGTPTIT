//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long solution(long long arr[], long long n, long long sum){
    unordered_map<long long, long long> prevSum;
    long long res = 0;
    long long currsum = 0;
    for (long long i = 0; i < n; i++) {
        currsum += arr[i];
        if (currsum == sum)
            res++;
        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);
        prevSum[currsum]++;
    }
    return res;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        input(a, n);
        // cout << solution(a, n, k) << endl;
        if (solution(a, n, k) == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}