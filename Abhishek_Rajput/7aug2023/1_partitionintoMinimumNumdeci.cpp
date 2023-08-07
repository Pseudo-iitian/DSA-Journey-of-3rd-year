#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        char max='0';
        
        for(int i=0;i<n.length();i++){
            if(n[i]>max)
                max=n[i];
        }
        return max-'0';
    }
};

int main(){
    Solution ob;
    string n= "82734";
    cout<<ob.minPartitions(n)<<endl;
    return 0;
}

//    https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/