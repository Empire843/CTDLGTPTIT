/* 
*  @author:         --> empire <--
*  topic: 	        Sinh kế tiếp
*  exercise title:  HOÁN VỊ TIẾP THEO CỦA CHUỖI SỐ
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int testcase;
		string s;
		cin>>testcase>>s;
		cout<<testcase<<" ";
		int n=s.length();
		int a[n];
		for(int i=0; i<n; i++){
			a[i]=s[i]-'0';
		}
		bool check=false;
		for(int i=n-1; i>=0; i--){
			if(a[i]>a[i-1]){
				check=true;
				for(int j=n-1; j>=i; j--){
					if(a[j]>a[i-1]){
						swap(a[j], a[i-1]);
						break;
					}
				}
				sort(a+i, a+n);
				break;
			}
		}
		if(check){
			for(int i=0; i<n; i++)
				cout<<a[i];
		}
		else cout<<"BIGGEST";
		cout<<endl;
	}
	return 0;
}