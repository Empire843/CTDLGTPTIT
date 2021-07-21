//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
vector<string>vtr;
void solution(int l, string s){
    int a[l];
	memset(a, 0, sizeof(a));
	for(int i=l-1; i>=0; i--){
		if(a[i]==0){
			a[i]=1;
			for(int j=i+1; j<l; j++)
				a[j]=0;
			string str="";
			for(int j=0; j<l; j++)
				if(a[j]==1) str+=s[j];
			vtr.push_back(str);
			i=l;
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int l;
		cin>>l;
		string s;
		cin>>s;
        solution(l, s); 
        sort(vtr.begin(), vtr.end());
		for(int i=0; i<vtr.size(); i++)
			cout<<vtr[i]<<" ";
		cout<<endl;
        vtr.clear();
    }
	return 0;
}