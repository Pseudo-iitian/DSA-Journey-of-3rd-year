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

bool possible(int n,int x){
	int num = ceil(float(n)/2);
	if(x<=num) return true;
	return false;
}
int main(){
	fastio
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		string res;
		if(n==1 && x==1){
			cout<<'z'<<endl;
		}
		else{
			if(possible(n,x)){
				queue<char> q;
				char ch = 'a';
				for(int i=0;i<x;++i){
					q.push(ch++);
				}
				if(n%2==0){
					// even hai
					for(int i=0;i<n/2;++i){
						char front = q.front();
						res.push_back(front);
						q.pop();
						q.push(front);
					}
					string copy = res;
					reverse(copy);
					res = res + copy;
				}
				else{
					// odd hai
					for(int i=0;i<n/2+1;++i){
						char front = q.front();
						res.push_back(front);
						q.pop();
						q.push(front);
					}
					int remSize= n - n/2 - 1;
					string copy = res.substr(0,remSize);
					reverse(copy);
					res = res + copy;
				}
				cout<<res<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
	}
	return 0;
}
