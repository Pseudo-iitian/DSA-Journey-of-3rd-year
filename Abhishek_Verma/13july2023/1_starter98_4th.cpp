#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int sum =0 ;
		int val;
		for(int i=0;i<m;++i){
			cin>>val;
			sum += n-val;
		}
		int rem = n-sum;
		cout<<((rem>0) ? rem: 0)<<endl;
	}
	return 0;
}

// Link - https://www.codechef.com/problems/BLDST?tab=statement