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

typedef unsigned long long ull;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<vector<long long int>> vvi;
typedef vector<pair<long long int, long long int>> vpii;
typedef map<long long int, long long int> mii;
typedef set<long long int> si;
typedef set<pair<long long int,long long int>> spii;
typedef pair<int,int> pr;
typedef pair<double,double> prd;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long long ll;
typedef long double lld;

const int M = 1e9+7;

// -----------------------------------------------------------------
#define int long long
#define endl "\n"; 
#define ub upper_bound
#define lb lower_bound
#define pb emplace_back
#define ppb pop_back
#define F first
#define S second
// #define mp make_pair
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
#define fr(n) for(int i=0; i<n; i++)
#define frr(n) for(int i=n-1;i>=0;i--)
#define for_se(st,n) for(int i = st; i < n; i++)
#define for_rsn(st,en) for(int i = st; i >= en; i--)
#define yes cout<<"YES"<<endl; 
#define no cout<<"NO"<<endl; 
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

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) {return (a*b) / gcd(a, b);}
int fact(int n){return (n==1 || n==0)?1:n*fact(n);}

void trim(string &s){
    int i=0;
    while(s[i]==' '){
        s.erase(s.begin()+i);
    }
    i= s.size()-1;
    while(s[i]==' '){
        s.erase(s.begin()+i);
        i--;
    }
    i=0;
    int ct = 0;
    for(int i=0;i<s.size();++i){
        if(s[i]==' '){
            ct++;
        }
        else ct =0;
        if(ct>1){
            s.erase(s.begin()+i);
            i--;
        }
    }
}

string reverseWords(string s) {
    int n = s.size();
    // trim(s);
    string str = "";
    string res = "";
    for(int i=n-1;i>=0;--i){
        if(s[i]!=' '){
            str = s[i] + str;
        }
        else{
            res.append(str);
            res.push_back(' ');
            str.erase();
        }
    }
    trim(res);
    res.append(" ");
    res.append(str);
    return res;
}
//Return XOR of all n elements in O(1) Complexity.
int XOR(int n){
  if (n % 4 == 0)
    return n;

  if (n % 4 == 1)
    return 1;

  if (n % 4 == 2)
    return n + 1;

  return 0;
}


void test(){
}

void solve(){
	int n;
	cin>>n;
	int a1=0,b1=0,ab1=0,o1=0;
	int mx = 0;
	map<string,int> mp;
	string s,a="A",b="B",o="O",ab="AB";
	while(n--){
		cin>>s;
		mp[s]++;
		if(s==a || s==ab){
			a1++;
		}
		if(s==b || s==ab){
			b1++;
		}
		if(s==o){
			o1++;
		}
		if(s==ab){
			ab1++;
		}
	}
	mx = max(a1,b1);
	mx = max(mx,o1);
	mx = max(mx,ab1);
	int mx1 = INT_MIN;
	if(mp.find(o)!=mp.end()){
		mx1 = max(b1,a1);
		mx1 = max(mx1,ab1);
	}
	int res = o1 + mx1;
	mx = max(mx,res);
	cout<<mx<<endl;
}

signed main(){
	fastio
	// test();
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
	