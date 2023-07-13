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

typedef pair<int,int> pr;
typedef pair<double,double> prd;
typedef vector<int> v;
typedef vector<double> vd;
typedef vector<vector<int> > vv;
typedef vector<vector<double> > vvd;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long long ll;
typedef long double lld;

// -----------------------------------------------------------------

#define pb push_back
#define F first
#define S second
#define reverse(v) reverse(v.begin(),v.end())
#define sort(v) sort(v.begin(),v.end())
#define sz(a) ((int)((a).size()))
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define printv(val,x) for(auto &val : x) 
#define printpr(p) cout<<p.first<<" "<<p.second;
#define mod 1000000007
#define mod1 998244353
#define pii 3.14159265358979323846
#define for_n(i,n) for(int i = 0; i < n; i++)
#define for_se(i,st,n) for(int i = st; i < n; i++)
#define for_rn(i,n) for(int i = n; i >= 0; i--)
#define for_rsn(i,st,en) for(int i = st; i >= en; i--)
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;
#define printMin1 cout<<"-1"<<endl;
// -----------------------------------------------------------------

// taking vector of pair
template<typename T1, typename T2>
istream& operator>>(istream &istream, pair<T1,T2> &p) {return (istream>> p.first>>p.second);}
// taking vector of v(n);
template<typename T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it: v)cin>>it;return istream;}
template<typename T3>
ostream& operator<<(ostream &ostream, vector<T3> &v){for(auto &it: v) cout<<it<<" ";return ostream;}

int main() {
	// your code goes here
	fastio
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		vector<vector<char> > marks;
		for(int i=0;i<n;++i){
			string s;
			cin>>s;
			int f=0,p=0,u=0;
			for(int j=0;j<m;++j){
				if(s[j]=='F') f++;
				else if(s[j]=='P') p++;
				else u++;
			}
			if(f>=x || f==x-1 && p>=y) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
	return 0;
}

// link - https://www.codechef.com/problems/HIRETEST