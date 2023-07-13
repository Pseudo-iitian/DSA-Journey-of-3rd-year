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

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int main() {
	fastio
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int count = 0;
		for(int i=1;i<s.size();++i){
		    if(s[i]!=s[i-1]) count++;
		}
		cout<<count+1<<endl;
	}
	return 0;
}
