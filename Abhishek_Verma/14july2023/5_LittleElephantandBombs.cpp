// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count = 0;
		for(int i=0;i<n;++i){
			if(s[i]=='0' && (s[i-1]=='0' || i==0) && (s[i+1]=='0' || i==n-1)){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
