#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]!=1 && i<m){
                cout<<0<<endl;
                break;
            }
            if(a[i]!=1 && i>=m){
                cout<<k<<endl;
                break ;
            }
            c++;
        }
        if(c==n)
            cout<<100<<endl;

	}
	return 0;
}
