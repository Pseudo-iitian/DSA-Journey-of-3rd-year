#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=1;
    int j=0;
    int maxi=1;
    while(i<n)
    {
        if(a[i]>a[i-1])
        {
            maxi=max(maxi,i-j+1);
            i++;
        }
        else{
           j=i;
           i++;
        }
    }
    cout<<maxi;
}