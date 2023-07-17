#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,k,n;
	    cin>>m>>k>>n;
	    int a[k],b[n];
	    for(int i=0;i<k;i++)
	        cin>>a[i];
	    for(int j=0;j<n;j++)
	        cin>>b[j];
        int c=0;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(a[i]==b[j])
                    c++;
            }
        }
        map<int,int>mp;
        for(int i=0;i<k;i++)
            mp[a[i]]++;
        for(int j=0;j<n;j++)
            mp[b[j]]++;
        k=1;
        int untrack=0;
        for(int i=1;i<=m;++i){
            if(mp.find(i)==mp.end()){
                untrack++;
            }
        }
        cout<<c<<" "<<untrack<<endl;
	}
	return 0;
}
