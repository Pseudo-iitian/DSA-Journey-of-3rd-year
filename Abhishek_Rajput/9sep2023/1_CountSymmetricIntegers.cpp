#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        
        for(int i=low;i<=high;i++){
            string x=to_string(i);
            int sum=0,sum2=0;
            if(x.size()%2==0){
                for(int j=0;j<x.size()/2;j++){
                    sum=sum+x[j];
                }
                for(int j=x.size()/2;j<x.size();j++){
                    sum2=sum2+x[j];
                }
                if(sum==sum2)
                    count++;
            }
        }
        return count;
    }
};

int main(){
    Solution ob;
    int low = 1200, high = 1230;
    cout<<ob.countSymmetricIntegers(low,high)<<endl;

    return 0;
}

//  https://leetcode.com/problems/count-symmetric-integers/