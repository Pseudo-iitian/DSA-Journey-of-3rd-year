#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int index=0;
	    int mini=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<mini){
	            mini=arr[i];
	            index=i;
	        }
	    } 
	    cout<<index+1<<endl;
	    
	}
	return 0;
}

////    https://www.codechef.com/problems/CHEFSUM
