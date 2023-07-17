#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0;i<n;++i){
	        cin>>arr[i];
	    }
	    arr[n]=INT_MAX;
	    int count =1,mx = INT_MIN, mn = INT_MAX;
	    for(int i=1;i<=n;++i){
	        if(abs(arr[i]-arr[i-1])<3) count++;
	        else{
	            mx = max(mx,count);
	            mn = min(mn,count);
	            count = 1;
	        }
	    }
	    cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}

// https://www.codechef.com/problems/COVID19