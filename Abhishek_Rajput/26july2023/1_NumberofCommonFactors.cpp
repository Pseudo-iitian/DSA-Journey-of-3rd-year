# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int commonFactors(int a, int b) {

        int mini=min(a,b);
        int maxi=max(a,b);
        int p=0;
        for(int i=1;i<=mini;i++){
            if(maxi%i==0 && mini%i==0)
                p++;
        }
        return p;
    }
};

int main(){
    Solution s;
    int a=25,b=30;
    cout<<s.commonFactors(a,b)<<endl;

    return 0;
}