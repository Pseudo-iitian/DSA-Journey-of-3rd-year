#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    map<int,int>freq;
	    for(auto i :mp){
	        freq[i.second]++;
	    }
	    int num=0;
	    int maxnum=0;
	    for(auto it:freq){
	        if(maxnum<it.second){
	            maxnum=it.second;
	            num=it.first;   
	        }
	    }
	    cout<<num<<endl;
	}
	return 0;
}



//    https://www.codechef.com/problems/MODEFREQ?tab=statement