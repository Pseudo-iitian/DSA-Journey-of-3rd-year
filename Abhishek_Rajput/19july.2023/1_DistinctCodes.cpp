#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    string s;
	    cin>>s;
	    int t=s.length();
	    set<string>str;
	    for(int i=0;i<t-1;i++){
	        str.insert(s.substr(i,2));
	    }
	    cout<<str.size()<<endl;
	}
	return 0;
}

//    https://www.codechef.com/problems/DISTCODE